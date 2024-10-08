#pragma once
#include "CoreMinimal.h"
#include "KoratBlastSkillTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastSkillTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastSkillTypeDataList();
};

