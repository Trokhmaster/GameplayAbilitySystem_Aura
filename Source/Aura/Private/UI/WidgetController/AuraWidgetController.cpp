// Copyright Trokhmaster


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::BroadcastInitValues()
{
	
}

void UAuraWidgetController::BindCallbacksToDependencies() const
{
	
}

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}
