#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_ShockTherapy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_ShockTherapy : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetToEvadePointMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CastShockTimeBuffer;

public:
	UAISkill_InteractionTarget_ShockTherapy();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_ShockTherapy) { return 0; }
