// HungerGames 2017

#pragma once

#include "Components/ActorComponent.h"
#include "PatrolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HUNGERGAMES_API UPatrolComponent : public UActorComponent
{
	GENERATED_BODY()

public:
    TArray<AActor*> GetPatrolPoints() const;
private:	
    UPROPERTY(EditInstanceOnly, Category = "Comp Patrol Route")
    TArray<AActor*> patrolPoints;
	
};
