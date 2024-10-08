#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "KoratAnimMetaDataMontageJumpPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UKoratAnimMetaDataMontageJumpPosition : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpPosition;
    
    UKoratAnimMetaDataMontageJumpPosition();

};

