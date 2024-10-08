#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDRMEditWordTextDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDRMEditWordTextDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AvailableTypeFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 WordCategoryFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 TextCategoryFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FilterFlags;
    
    USSDRMEditWordTextDataAsset();

};

