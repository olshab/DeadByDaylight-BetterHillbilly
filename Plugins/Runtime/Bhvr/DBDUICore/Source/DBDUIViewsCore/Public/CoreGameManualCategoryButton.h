#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreGameManualCategoryButton.generated.h"

class UDBDTextBlock;
class UDBDImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGameManualCategoryButton : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDTextBlock* Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDImage* Background;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UTexture2D* IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	UTexture2D* BackgroundTexture;

public:
	UFUNCTION(BlueprintCallable)
	void SetText(const FText titleNew, const FText descriptionNew);

public:
	UCoreGameManualCategoryButton();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGameManualCategoryButton) { return 0; }
