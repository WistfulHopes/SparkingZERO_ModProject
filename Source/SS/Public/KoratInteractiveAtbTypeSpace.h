#pragma once
#include "CoreMinimal.h"
#include "IKoratFreeTimelineCanPlayChecker.h"
#include "KoratFreeTimelineAtbSpaceParam.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractiveAtbTypeGetter.h"
#include "KoratInteractiveAtbTypeSpace.generated.h"

class UKoratInteractHitInformationBase;

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractiveAtbTypeSpace : public UKoratInteractiveAtbTypeGetter, public IIKoratFreeTimelineCanPlayChecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbSpaceParam SpaceParams;
    
    UKoratInteractiveAtbTypeSpace();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOneShot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratInteractAtbTypeDataList GetParameter(const int32 InUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckHitInformation(UKoratInteractHitInformationBase* InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlay();
    

    // Fix for true pure virtual functions not being implemented
};

