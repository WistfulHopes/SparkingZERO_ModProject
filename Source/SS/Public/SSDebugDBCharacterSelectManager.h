#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSMenuManager.h"
#include "SSDebugDBCharacterSelectManager.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDebugDBCharacterSelectManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* SelectedStartButtonOfLastSession;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> AlliesTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> EnemyTeamStartData;
    
    USSDebugDBCharacterSelectManager();

    UFUNCTION(BlueprintCallable)
    void TransitionDramaticBattle();
    
    UFUNCTION(BlueprintCallable)
    void SetTeam2pCharacterName(FKoratCharacterDataList In2p0, FKoratCharacterDataList In2p1, FKoratCharacterDataList In2p2, FKoratCharacterDataList In2p3, FKoratCharacterDataList In2p4);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam1pCharacterName(FKoratCharacterDataList In1p0, FKoratCharacterDataList In1p1, FKoratCharacterDataList In1p2, FKoratCharacterDataList In1p3, FKoratCharacterDataList In1p4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetCharacter2PSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, int32 InMemberNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetCharacter1PSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, int32 InMemberNo);
    
    UFUNCTION(BlueprintCallable)
    void DBStartScreenFade();
    
};

