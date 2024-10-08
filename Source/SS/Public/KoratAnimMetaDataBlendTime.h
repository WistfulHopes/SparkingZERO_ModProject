#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "KoratAnimMetaDataBlendTime.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UKoratAnimMetaDataBlendTime : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FromSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UKoratAnimMetaDataBlendTime();

};

