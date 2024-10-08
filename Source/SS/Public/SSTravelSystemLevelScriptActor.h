#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "KoratUILevelDataList.h"
#include "SSBattleLevelScriptActor.h"
#include "SSSubLevelTravelInfo.h"
#include "SSTravelSystemLevelScriptActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class ASSTravelSystemLevelScriptActor : public ASSBattleLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTravelSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUILevelDataList StartupUILevel;
    
    ASSTravelSystemLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void ViewLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FKoratUILevelDataList InUILevel, bool InShouldBeVisible, bool& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void TransitionLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FSSSubLevelTravelInfo InInfo, bool& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void RemoveLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FKoratUILevelDataList InUILevel, bool& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void AddLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FKoratUILevelDataList InUILevel, bool InShouldBeVisible, bool& OutResult);
    
};

