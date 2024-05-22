#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.h"
#include "CollisionManager.h"
#include "PlayerManager.h"
#include "GameStateManager.h"
#include "GameFacade.generated.h"

UCLASS()
class GALAGA_API AGameFacade : public AActor
{
    GENERATED_BODY()

public:
    AGameFacade();

    void StartGame();
    void UpdateGame(float DeltaTime);
    void PlayerShoot();
    void EnemyShoot();

private:
    UPROPERTY()
    UEnemyManager* EnemyManager;

    UPROPERTY()
    UCollisionManager* CollisionManager;

    UPROPERTY()
    UPlayerManager* PlayerManager;

    UPROPERTY()
    UGameStateManager* GameStateManager;
};
