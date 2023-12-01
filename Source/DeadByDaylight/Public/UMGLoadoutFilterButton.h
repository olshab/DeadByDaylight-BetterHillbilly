#pragma once

#include "CoreMinimal.h"
#include "OnLoadoutFilterClickedEvent.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGLoadoutFilterButton.generated.h"

class UButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutFilterButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UButton* ActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutFilterClickedEvent OnLoadoutFilterButtonClicked;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIcon(const TSoftObjectPtr<UTexture2D>& icon);

public:
	UFUNCTION(BlueprintCallable)
	void OnActionButtonClick();

	UFUNCTION(BlueprintCallable)
	void InitFilterButton(const FName& filterName, const TSoftObjectPtr<UTexture2D> filterTexture);

public:
	UUMGLoadoutFilterButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutFilterButton) { return 0; }
