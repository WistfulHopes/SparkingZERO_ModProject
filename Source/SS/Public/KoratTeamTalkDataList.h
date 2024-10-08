#pragma once
#include "CoreMinimal.h"
#include "KoratTeamTalkDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratTeamTalkDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratTeamTalkDataList();
};

