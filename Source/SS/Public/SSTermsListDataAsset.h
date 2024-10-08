#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSTermsListDataAsset.generated.h"

class USSTermsDataAsset;

UCLASS(Blueprintable)
class USSTermsListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTermsDataAsset*> ServiceRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTermsDataAsset*> ServiceRecordsPs5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTermsDataAsset*> PolicyRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTermsDataAsset*> DataRecords;
    
    USSTermsListDataAsset();

};

