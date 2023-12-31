#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "BaseSurvivorAnimInstance.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UBaseSurvivorAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* _owningSurvivor;

public:
	UFUNCTION(BlueprintPure)
	bool IsPlayingMontageByName(FName montageId) const;

protected:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

public:
	UBaseSurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBaseSurvivorAnimInstance) { return 0; }
