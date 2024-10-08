#pragma once
#include "CoreMinimal.h"
#include "KoratBindingIdSetting.generated.h"

USTRUCT(BlueprintType)
struct FKoratBindingIdSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatternName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddTagSameDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoAddTag;
    
    SS_API FKoratBindingIdSetting();
};

