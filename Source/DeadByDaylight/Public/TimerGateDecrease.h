#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerGateDecrease.generated.h"

class ATimerGate;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATimerGateDecrease : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATimerGate* TimerGate;

public:
	UFUNCTION(BlueprintCallable)
	void Update(float deltaTime);

public:
	ATimerGateDecrease();
};

FORCEINLINE uint32 GetTypeHash(const ATimerGateDecrease) { return 0; }
