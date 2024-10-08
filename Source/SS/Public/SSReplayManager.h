#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSReplayUIPlayInfo.h"
#include "SSReplayManager.generated.h"

UCLASS(Blueprintable)
class SS_API USSReplayManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSReplayUIPlayInfo PlayState;
    
public:
    USSReplayManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Stop(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Play(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Pause(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSReplayUIPlayInfo GetPlayState() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool ChangeNextPlayCamera(UObject* WorldContextObject);
    
};

