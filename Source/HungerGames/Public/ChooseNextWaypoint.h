// HungerGames 2017

#pragma once

#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class HUNGERGAMES_API UChooseNextWaypoint : public UBTTaskNode
{
    GENERATED_BODY()

private:
    /** starts this task, should return Succeeded, Failed or InProgress
    *  (use FinishLatentTask() when returning InProgress)
    * this function should be considered as const (don't modify state of object) if node is not instanced! */
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
