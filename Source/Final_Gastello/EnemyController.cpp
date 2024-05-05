// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "EnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AEnemyController::AEnemyController()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);

	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn == nullptr) return;
	
	StartBehavior(InPawn);
}

UBlackboardComponent* AEnemyController::GetBlackboardComponent() const
{
	return BlackboardComponent;
}

void AEnemyController::StartBehavior(APawn* InPawn) const
{
	if (AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(InPawn))
	{
		if (Enemy->BehaviorTree)
		{
			BlackboardComponent->InitializeBlackboard(*Enemy->BehaviorTree->BlackboardAsset);
			BehaviorTreeComponent->StartTree(*Enemy->BehaviorTree);
		}
	}
}

void AEnemyController::StopBehavior() const
{
	BehaviorTreeComponent->StopTree();
}
