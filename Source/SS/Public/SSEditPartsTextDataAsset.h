#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockType.h"
#include "KoratDRMEditBaseTextDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "MutualDataAsset.h"
#include "SSEditPartsTextDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEditPartsTextDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditBaseTextDataList> BaseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditWordTextDataList> FillInBlankWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockType UnLockType;
    
    USSEditPartsTextDataAsset();

};

