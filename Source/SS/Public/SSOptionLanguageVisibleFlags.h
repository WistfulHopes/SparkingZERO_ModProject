#pragma once
#include "CoreMinimal.h"
#include "SSOptionLanguageVisibleFlags.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionLanguageVisibleFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalizationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalizationVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackgroundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackgroundMenu;
    
    SS_API FSSOptionLanguageVisibleFlags();
};

