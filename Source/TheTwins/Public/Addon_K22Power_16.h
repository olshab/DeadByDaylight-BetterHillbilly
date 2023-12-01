#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_16.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_16 : public UOnEventBaseAddon
{
	GENERATED_BODY()

public:
	UAddon_K22Power_16();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_16) { return 0; }
