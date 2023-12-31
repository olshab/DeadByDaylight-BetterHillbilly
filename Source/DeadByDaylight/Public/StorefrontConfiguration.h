#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStorefrontState.h"
#include "StorefrontStateData.h"
#include "StorefrontConfiguration.generated.h"

UCLASS(Blueprintable)
class UStorefrontConfiguration : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EStorefrontState, FStorefrontStateData> States;

public:
	UStorefrontConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UStorefrontConfiguration) { return 0; }
