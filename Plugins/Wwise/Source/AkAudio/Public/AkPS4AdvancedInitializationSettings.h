#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkPS4AdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkPS4AdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 ACPBatchBufferSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseHardwareCodecLowLatencyMode;

public:
	AKAUDIO_API FAkPS4AdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkPS4AdvancedInitializationSettings) { return 0; }
