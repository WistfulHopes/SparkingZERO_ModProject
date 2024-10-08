#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleWLibHelpDialogData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSDramaticBattleWLibHelpDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    SS_API FSSDramaticBattleWLibHelpDialogData();
};

