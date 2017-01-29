// HungerGames 2017

#include "HungerGames.h"
#include "Public/PatrolComponent.h"

TArray<AActor*> UPatrolComponent::GetPatrolPoints() const
{
    return patrolPoints;
}