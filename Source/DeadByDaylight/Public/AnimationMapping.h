#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "AnimationMapping.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FAnimationMapping: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAnimMontage> MontageAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAnimMontage* _montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _loadAttempted;

public:
	DEADBYDAYLIGHT_API FAnimationMapping();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationMapping) { return 0; }
