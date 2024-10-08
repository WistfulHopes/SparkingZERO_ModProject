#pragma once
#include "CoreMinimal.h"
#include "SSOptionKeyControlVisibleFlags.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionKeyControlVisibleFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssistControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveDataReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserNotification;
    
    SS_API FSSOptionKeyControlVisibleFlags();
};

