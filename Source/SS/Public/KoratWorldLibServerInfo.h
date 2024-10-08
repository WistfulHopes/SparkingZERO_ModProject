#pragma once
#include "CoreMinimal.h"
#include "KoratWorldLibServerInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratWorldLibServerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OthersGoodCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OthersFavoriteCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OthersPlayCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MyFavoriteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMasterAchieved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstClearPlayer;
    
    SS_API FKoratWorldLibServerInfo();
};

