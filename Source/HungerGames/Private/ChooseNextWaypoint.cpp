// HungerGames 2017

#include "HungerGames.h"
#include "ChooseNextWaypoint.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    UE_LOG(LogTemp, Warning, TEXT("DONKEY"));

    return EBTNodeResult::Succeeded;
}