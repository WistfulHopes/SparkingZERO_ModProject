#pragma once
#include "CoreMinimal.h"
#include "KoratBlastGroupDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlastGroupDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    SS_API FKoratBlastGroupDataAssetRecord();
};

