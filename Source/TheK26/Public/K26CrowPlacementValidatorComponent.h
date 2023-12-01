#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K26CrowPlacementValidatorComponent.generated.h"

class UObjectPlacementValidationWithRestrictionStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK26CrowPlacementValidatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UObjectPlacementValidationWithRestrictionStrategy* _objectPlacementValidationStrategyWithRestrictions;

public:
	UK26CrowPlacementValidatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26CrowPlacementValidatorComponent) { return 0; }
