#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ExposerInteriorZoneComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UExposerInteriorZoneComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> ExposerSpawnPoints;

public:
	UFUNCTION(BlueprintCallable)
	void AddExposerSpawnPoint(USceneComponent* point);

public:
	UExposerInteriorZoneComponent();
};

FORCEINLINE uint32 GetTypeHash(const UExposerInteriorZoneComponent) { return 0; }
