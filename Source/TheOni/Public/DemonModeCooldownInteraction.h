#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DemonModeCooldownInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEONI_API UDemonModeCooldownInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerOwner(const ADBDPlayer* owner);

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UDemonModeCooldownInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDemonModeCooldownInteraction) { return 0; }
