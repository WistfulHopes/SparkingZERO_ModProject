#pragma once
#include "CoreMinimal.h"
#include "SSLevelScriptActor.h"
#include "SSMMUTRSubLevelScriptActor.generated.h"

class ASSTravelSystemLoadDisplayBase;
class UCurveFloat;
class USSMainMenuTransitionWidget;

UCLASS(Blueprintable)
class ASSMMUTRSubLevelScriptActor : public ASSLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMainMenuTransitionWidget> LoadDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> CrossFadeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSTravelSystemLoadDisplayBase> LoadDisplayController;
    
    ASSMMUTRSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLoadDisplayWidget(TSoftClassPtr<USSMainMenuTransitionWidget> InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossFadeCurve(TSoftObjectPtr<UCurveFloat> InCurve);
    
};

