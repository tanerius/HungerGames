// HungerGames 2017

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrolGuard.generated.h"

/**
 * 
 */
UCLASS()
class HUNGERGAMES_API APatrolGuard : public ATP_ThirdPersonCharacter
{
    GENERATED_BODY()

    UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
    TArray<AActor*> patrolPointsCpp;
	
	
};
