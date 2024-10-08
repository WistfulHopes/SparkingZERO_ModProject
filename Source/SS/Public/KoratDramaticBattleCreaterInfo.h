#pragma once
#include "CoreMinimal.h"
#include "KoratIconTitleDataList.h"
#include "KoratDramaticBattleCreaterInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBattleCreaterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratIconTitleDataList IconId;
    
    SS_API FKoratDramaticBattleCreaterInfo();
};

