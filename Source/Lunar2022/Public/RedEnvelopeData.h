#pragma once

#include "CoreMinimal.h"
#include "ERedEnvelopeState.h"
#include "RedEnvelopeData.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FRedEnvelopeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ERedEnvelopeState RedEnvelopeState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* LastInteractingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsJackpot;

public:
	LUNAR2022_API FRedEnvelopeData();
};

FORCEINLINE uint32 GetTypeHash(const FRedEnvelopeData) { return 0; }
