#pragma once
#include "CoreMinimal.h"
#include "EKoratActionCategoryType.h"
#include "KoratConditionPlayVoiceData.h"
#include "MutualDataAsset.h"
#include "SSConditionalPlayVoiceDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API USSConditionalPlayVoiceDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratActionCategoryType> ActionCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratConditionPlayVoiceData> Records;
    
    USSConditionalPlayVoiceDataAsset();

};

