// HungerGames 2017

#include "HungerGames.h"
#include "ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // Super::ExecuteTask(OwnerComp, NodeMemory);
    
    auto blackboardComponent = OwnerComp.GetBlackboardComponent();
    auto index = blackboardComponent->GetValueAsInt(indexKey.SelectedKeyName);
    UE_LOG(LogTemp, Warning, TEXT("Waypoint index: %i"), index);

    return EBTNodeResult::Succeeded;
}