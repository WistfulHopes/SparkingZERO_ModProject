#pragma once
#include "CoreMinimal.h"
#include "KoratMissionCard.h"
#include "SSUiWidget.h"
#include "SSMissionSelectMode02Widget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMissionSelectMode02Widget : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionCard MissionCardBaseBefor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionCard MissionCardBaseAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReleseMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnimFinish;
    
public:
    USSMissionSelectMode02Widget();

};

