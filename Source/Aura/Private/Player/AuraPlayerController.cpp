// Copyright Trokhmaster


#include "Player/AuraPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Interaction/EnemyInterface.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CursorTrace();
}

void AAuraPlayerController::CursorTrace()
{
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility,false,CursorHit);
	if(!CursorHit.bBlockingHit) return;
	LastActor = ThisActor;
	ThisActor = CursorHit.GetActor();
	/* 
	 * A. LasActor is null and ThisActor is null
	 *		do nothing
	 * B. LastActor ==null , this actor!=null
	 *		HighLight ThisActor
	 *	C. LastActor&ThisActor!=null and LastActor!=ThisActor
	 *		HighLight ThisActor. UnHighLight LastActor
	 *	D. LastActor&ThisActor!=null and LastActor==ThisActor
	 *		do nothing
	 *	E. LastActor != null, ThisActor == null
	 *		Unhidghligh LastActor
	*/

	if(!LastActor)
	{
		if(ThisActor)
		{
			ThisActor->HighlightActor();//scenario B
		}
		//scenario A
	}
	else
	{
		if(!ThisActor)
		{
			LastActor->UnhighlightActor();// scenario E
		}
		else
		{
			if(LastActor!=ThisActor)
			{
				LastActor->UnhighlightActor();
				ThisActor->HighlightActor();
			}
		}
		
		
	}
	
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem =  ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(AuraContext,0);
	
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	
	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);

	
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered,this,&AAuraPlayerController::Move);
	
}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2d InputAxisVector = InputActionValue.Get<FVector2d>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f,Rotation.Yaw,0.f);

	const FVector ForwardVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if(APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardVector,InputAxisVector.Y); 
		ControlledPawn->AddMovementInput(RightVector,InputAxisVector.X);
		
	}
}


