#pragma once

#include "CoreMinimal.h"
#include "PossessNegationEffectComponent.h"
#include "KillerPossessNegationEffectComponent.generated.h"

class AConjoinedTwin;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnTwinSet(AConjoinedTwin* twin);

public:
	UKillerPossessNegationEffectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerPossessNegationEffectComponent) { return 0; }
