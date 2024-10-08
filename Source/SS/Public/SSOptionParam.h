#pragma once
#include "CoreMinimal.h"
#include "SSOptionAssistParam.h"
#include "SSOptionBrightnessParam.h"
#include "SSOptionControlParam.h"
#include "SSOptionEtcParam.h"
#include "SSOptionKeyControlParam.h"
#include "SSOptionLanguageParam.h"
#include "SSOptionSoundParam.h"
#include "SSOptionVideoParam.h"
#include "SSOptionParam.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionControlParam Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionSoundParam Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionLanguageParam Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionEtcParam Etc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionBrightnessParam Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionVideoParam Video;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionKeyControlParam KeyControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionAssistParam Assist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionControlParam Control2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionVideoParam Video2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionKeyControlParam KeyControl2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionAssistParam Assist2P;
    
    SS_API FSSOptionParam();
};

