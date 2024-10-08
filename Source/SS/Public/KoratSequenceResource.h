#pragma once
#include "CoreMinimal.h"
#include "KoratSequenceResource.generated.h"

class ASSCharacter;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratSequenceResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* TemplateSequence;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* TemplateCancelSequnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> RootCharacter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionDataKey;
    
    SS_API FKoratSequenceResource();
};

