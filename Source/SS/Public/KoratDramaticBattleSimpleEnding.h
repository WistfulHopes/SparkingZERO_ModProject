#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratActionDataList.h"
#include "KoratBGMDataList.h"
#include "KoratDramaticBattleSimpleEnding.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBattleSimpleEnding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList SpecifiedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplaySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DisplayPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TelopText;
    
    SS_API FKoratDramaticBattleSimpleEnding();
};

