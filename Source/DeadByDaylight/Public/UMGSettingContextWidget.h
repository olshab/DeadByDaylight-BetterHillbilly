#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSettingContextWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingContextWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetContextTitle(const FText& contextTitle);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleContextButtonClickEvent(int32 buttonData);

public:
	UUMGSettingContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingContextWidget) { return 0; }
