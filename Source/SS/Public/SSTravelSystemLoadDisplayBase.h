#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSTravelSystemLoadDisplayIf.h"
#include "TravelSystemLoadDisplayChangedStatusDelegate.h"
#include "SSTravelSystemLoadDisplayBase.generated.h"

class UCurveFloat;
class USSMainMenuTransitionWidget;

UCLASS(Blueprintable)
class ASSTravelSystemLoadDisplayBase : public AActor, public ISSTravelSystemLoadDisplayIf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMainMenuTransitionWidget> LoadDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> CrossFadeCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelSystemLoadDisplayChangedStatus OnOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelSystemLoadDisplayChangedStatus OnOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelSystemLoadDisplayChangedStatus OnClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelSystemLoadDisplayChangedStatus OnClosed;
    
    ASSTravelSystemLoadDisplayBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetLoadDisplayWidget(TSoftClassPtr<USSMainMenuTransitionWidget> InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossFadeCurve(TSoftObjectPtr<UCurveFloat> InCurve);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    

    // Fix for true pure virtual functions not being implemented
};

