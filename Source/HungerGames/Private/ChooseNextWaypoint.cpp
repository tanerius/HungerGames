// HungerGames 2017

#include "HungerGames.h"
#include "Public/ChooseNextWaypoint.h"
#include "AIController.h"
#include "Public/PatrolComponent.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

    // Super::ExecuteTask(OwnerComp, NodeMemory);
    // Get the partol points
    auto controlledPawn = OwnerComp.GetAIOwner()->GetPawn();
    auto patrolRoute = controlledPawn->FindComponentByClass<UPatrolComponent>();

    if (!ensure(patrolRoute))
    {
        return EBTNodeResult::Failed;
    }

    // get the patrol route - warn about empty route
    auto patrolPoints = patrolRoute->GetPatrolPoints();
    if (patrolPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("A guard is issing patrol points"));
        return EBTNodeResult::Failed;
    }
    
    // Set next wawpoint
    auto blackboardComponent = OwnerComp.GetBlackboardComponent();
    auto index = blackboardComponent->GetValueAsInt(indexKey.SelectedKeyName);
    blackboardComponent->SetValueAsObject(waypointKey.SelectedKeyName, patrolPoints[index]);

    

    //Cycle the index
    auto nextIndex = (index + 1) % patrolPoints.Num();
    blackboardComponent->SetValueAsInt(indexKey.SelectedKeyName, nextIndex);

    return EBTNodeResult::Succeeded;
}