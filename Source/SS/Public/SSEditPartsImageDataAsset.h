#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockType.h"
#include "KoratDRMEditPictureDataList.h"
#include "MutualDataAsset.h"
#include "SSEditPartsImageDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEditPartsImageDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditPictureDataList> EditImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockType UnLockType;
    
    USSEditPartsImageDataAsset();

};

