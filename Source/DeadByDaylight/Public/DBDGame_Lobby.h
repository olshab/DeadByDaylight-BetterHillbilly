#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Lobby.generated.h"

class UIdentityValidation;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDGame_Lobby : public ADBDBaseGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UIdentityValidation* _identityValidation;

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_RemoveBotByIndex(int32 botIndex);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_FillLobbyWithBotsByName(const FString& selectedKiller, int32 rank);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_FillLobby();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AddBotToLobbyNoLoadoutByName(const FString& selectedCharacter);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AddBotToLobbyNoLoadout(int32 selectedCharacter);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AddBotToLobbyByName(const FString& selectedCharacter, const FString& item, const FString& addon1, const FString& addon2, const FString& offering, const FString& perk1, const FString& perk2, const FString& perk3, const FString& perk4, int32 rank);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AddBotToLobby(int32 selectedCharacter, const FString& item, const FString& addon1, const FString& addon2, const FString& offering, const FString& perk1, const FString& perk2, const FString& perk3, const FString& perk4, int32 rank);

public:
	ADBDGame_Lobby();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGame_Lobby) { return 0; }
