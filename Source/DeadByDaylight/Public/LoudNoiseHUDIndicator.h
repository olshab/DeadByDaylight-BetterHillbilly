#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LoudNoiseAddedEvent.h"
#include "LoudNoiseIndicatorData.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseHUDIndicator.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULoudNoiseHUDIndicator : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* MaskMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* DistortionMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EdgePadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CornerRoundness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScreenFadeOutDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FLoudNoiseAddedEvent LoudNoiseAddedEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FLoudNoiseIndicatorData> _trackedNoises;

public:
	UFUNCTION(BlueprintCallable)
	void AddTrackedNoise(FVector location, float duration);

public:
	ULoudNoiseHUDIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ULoudNoiseHUDIndicator) { return 0; }
