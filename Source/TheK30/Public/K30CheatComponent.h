#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K30CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K30ToggleGuardAttackDespawn(int32 despawnOnAttack);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K30SetPatrolAndHuntDuration(float secondsToPatrol);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K30SetNextGuardIndex(int32 nextGuardIndex);

public:
	UK30CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK30CheatComponent) { return 0; }
