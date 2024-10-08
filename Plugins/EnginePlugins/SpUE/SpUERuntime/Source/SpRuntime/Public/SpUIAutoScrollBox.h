#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "ESpUIScrollDirection.h"
#include "SpUIAutoScrollBox.generated.h"

UCLASS(Blueprintable)
class SPRUNTIME_API USpUIAutoScrollBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpUIScrollDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrollLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndWaitTime;
    
    USpUIAutoScrollBox();

    UFUNCTION(BlueprintCallable)
    void StopScroll(bool bInResetPosition);
    
    UFUNCTION(BlueprintCallable)
    void StartScroll();
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetScroll(bool bInTickStop);
    
};

