#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "ESSReplayDataUISortCondition.h"
#include "SSReplayDataUIManager.generated.h"

class USSReplayDataUIElement;

UCLASS(Blueprintable)
class SS_API USSReplayDataUIManager : public UObject {
    GENERATED_BODY()
public:
    USSReplayDataUIManager();

    UFUNCTION(BlueprintCallable)
    bool WasLastSaveDataOpSuccess();
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitingSaveDataOp();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReplayList(TArray<USSReplayDataUIElement*>& OutReplayDataList, const ESSReplayDataUISortCondition InSortCondition, const bool bInDescend, const bool bInFavoriteMark);
    
    UFUNCTION(BlueprintCallable)
    FString GetLastSaveDataOpFailureMessage();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAsyncResult();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void AsyncSaveFavoriteAndNewMark(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const USSReplayDataUIElement* InReplayDataList, const int32 InFavoriteMark, const bool bInNew);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void AsyncLoadReplayList(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const ESSReplayDataUISortCondition InSortCondition, const bool bInDescend);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void AsyncDelete(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TArray<USSReplayDataUIElement*>& InReplayDataList);
    
};

