#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AnimationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UAnimationWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _playRate;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayRate(float rate);

protected:
	UFUNCTION(BlueprintPure)
	float GetPlayRate() const;

public:
	UAnimationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UAnimationWidget) { return 0; }
