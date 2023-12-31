#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoctorCheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDoctorCheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AddMadness(float madnessToAdd, const FString& localPlayerId);

public:
	UDoctorCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorCheatComponent) { return 0; }
