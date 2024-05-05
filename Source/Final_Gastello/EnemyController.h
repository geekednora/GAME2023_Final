// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class FINAL_GASTELLO_API AEnemyController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemyController();

	virtual void OnPossess(APawn* InPawn) override;
	// virtual void OnUnPossess() override;

	UPROPERTY(BlueprintReadWrite, Category =  Behavior)
	class UBehaviorTreeComponent* BehaviorTreeComponent;

	UPROPERTY(BlueprintReadWrite, Category = Behavior)
	class UBlackboardComponent* BlackboardComponent;

	UBlackboardComponent* GetBlackboardComponent() const;

	void StartBehavior(APawn* InPawn) const;
	void StopBehavior() const;

	// FORCEINLINE class UAIPerceptionComponent* GetAIPerceptionComponent() const { return AIPerceptionComponent; }
};
