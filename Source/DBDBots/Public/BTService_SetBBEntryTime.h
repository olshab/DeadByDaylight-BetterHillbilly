#pragma once

#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SetBBEntryTime.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_SetBBEntryTime : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBToSetKey;

public:
	UBTService_SetBBEntryTime();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetBBEntryTime) { return 0; }
