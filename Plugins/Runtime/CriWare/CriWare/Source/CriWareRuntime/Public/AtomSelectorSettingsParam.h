#pragma once
#include "CoreMinimal.h"
#include "AtomStringWithComment.h"
#include "AtomSelectorSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomStringWithComment> Labels;
    
    CRIWARERUNTIME_API FAtomSelectorSettingsParam();
};

