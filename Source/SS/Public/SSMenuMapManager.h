#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratMapDataList.h"
#include "MenuMapParameter.h"
#include "SSMenuMapManager.generated.h"

class ASSUiSubLevelManager;

UCLASS(Blueprintable)
class ASSMenuMapManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSUiSubLevelManager* SubLevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuMapParameter MapParameter;
    
public:
    ASSMenuMapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSwitch();
    
    UFUNCTION(BlueprintCallable)
    void StartLoad();
    
    UFUNCTION(BlueprintCallable)
    void LoadMap(const FKoratMapDataList& InMapDataList, const FMenuMapParameter& InParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapSwitched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
};

