#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GuardSlowingZone.generated.h"

UCLASS(Blueprintable)
class THEK30_API AGuardSlowingZone : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnZoneEndOverlap(AActor* overlappedActor, AActor* otherActor);

	UFUNCTION(BlueprintCallable)
	void OnZoneBeginOverlap(AActor* overlappedActor, AActor* otherActor);

public:
	AGuardSlowingZone();
};

FORCEINLINE uint32 GetTypeHash(const AGuardSlowingZone) { return 0; }
