#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GlassCollectionSubsystem.generated.h"

class UGlassStaticMesh;

UCLASS(Blueprintable)
class UGlassCollectionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UGlassStaticMesh*> _glassCollection;

public:
	UGlassCollectionSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UGlassCollectionSubsystem) { return 0; }
