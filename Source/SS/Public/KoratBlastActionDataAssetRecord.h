#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratBlastActionCategoryDataList.h"
#include "KoratBlastActionDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlastActionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBlastActionCategoryDataList, FKoratActionDataList> Actions;
    
    SS_API FKoratBlastActionDataAssetRecord();
};

