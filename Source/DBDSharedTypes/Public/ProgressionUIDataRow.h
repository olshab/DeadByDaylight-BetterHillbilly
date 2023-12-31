#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "CurrencyProgressionUIData.h"
#include "EProgressionType.h"
#include "ProgressionUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FProgressionUIDataRow: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProgressionType ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCurrencyProgressionUIData CurrencyProgressionUIData;

public:
	DBDSHAREDTYPES_API FProgressionUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FProgressionUIDataRow) { return 0; }
