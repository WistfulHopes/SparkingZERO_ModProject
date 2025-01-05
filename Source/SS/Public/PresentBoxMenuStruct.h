#pragma once
#include "CoreMinimal.h"
#include "PresentBoxMenuStruct.generated.h"

class USSMenuManager;
class USSPresentBoxListMenuManager;

USTRUCT(BlueprintType)
struct FPresentBoxMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* SSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPresentBoxListMenuManager* ListMenu;
    
    SS_API FPresentBoxMenuStruct();
};

