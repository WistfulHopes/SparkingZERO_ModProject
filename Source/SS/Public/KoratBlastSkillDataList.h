#pragma once
#include "CoreMinimal.h"
#include "KoratBlastSkillDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastSkillDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastSkillDataList();
};

