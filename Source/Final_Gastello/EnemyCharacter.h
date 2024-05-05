// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class FINAL_GASTELLO_API AEnemyCharacter : public ABaseCharacter
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AEnemyCharacter();

	// Default behavior tree for the enemy
	UPROPERTY(EditAnywhere, Category="BehaviorTree")
	class UBehaviorTree* BehaviorTree;
};
