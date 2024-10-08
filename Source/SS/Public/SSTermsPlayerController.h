#pragma once
#include "CoreMinimal.h"
#include "SSPlayerController.h"
#include "SSTermsPlayerController.generated.h"

class USSTermLanguageSelectManager;
class USSTermsManager;

UCLASS(Blueprintable)
class ASSTermsPlayerController : public ASSPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTermsManager* TermsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTermLanguageSelectManager* TermsSelect;
    
public:
    ASSTermsPlayerController(const FObjectInitializer& ObjectInitializer);

};

