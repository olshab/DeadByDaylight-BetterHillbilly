#pragma once

#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "NavigationQueryFilter_Player.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UNavigationQueryFilter_Player : public UNavigationQueryFilter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSearchNodes;

public:
	UNavigationQueryFilter_Player();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_Player) { return 0; }
