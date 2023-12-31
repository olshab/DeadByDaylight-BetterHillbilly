#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "CrownPillarOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCrownPillarOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _offeringEnabledAuraColor;

public:
	UCrownPillarOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCrownPillarOutlineUpdateStrategy) { return 0; }
