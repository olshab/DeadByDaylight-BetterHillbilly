#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BaseInstantBlinkInteraction.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBaseInstantBlinkInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _blinkTimePercentage;

public:
	UBaseInstantBlinkInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseInstantBlinkInteraction) { return 0; }
