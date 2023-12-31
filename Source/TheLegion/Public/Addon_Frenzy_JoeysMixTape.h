#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseFrenzyMixtapeAddon.h"
#include "Addon_Frenzy_JoeysMixTape.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_JoeysMixTape : public UBaseFrenzyMixtapeAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToImpose;

public:
	UAddon_Frenzy_JoeysMixTape();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_JoeysMixTape) { return 0; }
