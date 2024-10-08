#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataMajorItemType.h"
#include "ESSGalleryMyDataMinorItemType.h"
#include "SSGalleryMyDataItemRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSGalleryMyDataItemRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGalleryMyDataMajorItemType MajorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSGalleryMyDataMinorItemType> MinorItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    SS_API FSSGalleryMyDataItemRecord();
};

