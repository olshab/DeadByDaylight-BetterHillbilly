#pragma once

#include "CoreMinimal.h"
#include "AkXboxOneGDKInitializationSettings.h"
#include "AkXboxOneAnvilInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
	GENERATED_BODY()

public:
	UAkXboxOneAnvilInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOneAnvilInitializationSettings) { return 0; }
