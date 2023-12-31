#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EGiftSpecialAction.h"
#include "UObject/SoftObjectPtr.h"
#include "GiftSpecialActionData.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FGiftSpecialActionData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGiftSpecialAction ActionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMediaSource> VideoSource;

public:
	DEADBYDAYLIGHT_API FGiftSpecialActionData();
};

FORCEINLINE uint32 GetTypeHash(const FGiftSpecialActionData) { return 0; }
