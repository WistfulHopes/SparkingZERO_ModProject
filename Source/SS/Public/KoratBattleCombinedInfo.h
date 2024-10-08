#pragma once
#include "CoreMinimal.h"
#include "KoratBattleCombinedInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleCombinedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaNo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaNo2;
    
    SS_API FKoratBattleCombinedInfo();
};

