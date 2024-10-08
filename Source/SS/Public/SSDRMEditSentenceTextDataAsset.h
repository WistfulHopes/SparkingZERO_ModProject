#pragma once
#include "CoreMinimal.h"
#include "SSDRMEditBaseTextDataAsset.h"
#include "SSDRMEditSentenceTextDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDRMEditSentenceTextDataAsset : public USSDRMEditBaseTextDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AvailableTypeFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 TextCategoryFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FilterFlags;
    
public:
    USSDRMEditSentenceTextDataAsset();

};

