#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ESSKeyInputType.h"
#include "ESSOptionManagerPlatformType.h"
#include "KeyInputDIK_FKEY.h"
#include "SSOptionParam.h"
#include "SSOptionVisibleFlags.h"
#include "SSSystemSaveData.generated.h"

UCLASS(Blueprintable)
class SS_API USSSystemSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTitleOptionDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSOptionManagerPlatformType OptionManagerPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptionKeyControlEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionParam OptionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionVisibleFlags OptionVisibleFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FKeyInputDIK_FKEY> JpKeyInputTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FKeyInputDIK_FKEY> JpKeyInputTable2P;
    
    USSSystemSaveData();

};

