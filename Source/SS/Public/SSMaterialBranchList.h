#pragma once
#include "CoreMinimal.h"
#include "SSMaterialBranchList.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct SS_API FSSMaterialBranchList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> Materials;
    
    FSSMaterialBranchList();
};

