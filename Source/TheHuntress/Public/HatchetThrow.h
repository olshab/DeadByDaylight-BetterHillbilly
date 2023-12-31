#pragma once

#include "CoreMinimal.h"
#include "ThrowInteraction.h"
#include "DBDTunableRowHandle.h"
#include "HatchetThrow.generated.h"

class ATheHuntressPower;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHatchetThrow : public UThrowInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetThrowCancellationCooldown;

protected:
	UFUNCTION(BlueprintPure)
	ATheHuntressPower* GetOwningHatchetSpawner() const;

public:
	UHatchetThrow();
};

FORCEINLINE uint32 GetTypeHash(const UHatchetThrow) { return 0; }
