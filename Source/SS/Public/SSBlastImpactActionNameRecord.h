#pragma once
#include "CoreMinimal.h"
#include "KoratBlastActionCategoryDataList.h"
#include "SSBlastImpactActionNameRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBlastImpactActionNameRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionCategoryDataList ActionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionCategoryDataList ActionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionCategoryDataList ActionWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionCategoryDataList ActionLose;
    
    SS_API FSSBlastImpactActionNameRecord();
};

