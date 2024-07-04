// Copyright Trokhmaster

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	AAuraEnemy();

public:
	/**Enemy Interface section*/
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;
	/**Enemy Interface section ended*/

protected:
	virtual  void BeginPlay() override;

	
};
