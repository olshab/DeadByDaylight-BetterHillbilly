#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BiteTheBullet.generated.h"

class UBiteTheBulletEffect;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBiteTheBullet : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UBiteTheBulletEffect> _effectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _server_healTarget;

public:
	UBiteTheBullet();
};

FORCEINLINE uint32 GetTypeHash(const UBiteTheBullet) { return 0; }
