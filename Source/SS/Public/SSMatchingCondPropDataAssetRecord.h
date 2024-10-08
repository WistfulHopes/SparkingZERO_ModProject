#pragma once
#include "CoreMinimal.h"
#include "EMCPDynamicPropertyListType.h"
#include "SSMatchingCondProp.h"
#include "SSMatchingCondPropDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSMatchingCondPropDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMatchingCondProp> PropertyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMCPDynamicPropertyListType DynamicGenerateType;
    
    SS_API FSSMatchingCondPropDataAssetRecord();
};

