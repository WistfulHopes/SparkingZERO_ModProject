#pragma once
#include "CoreMinimal.h"
#include "EndingMenuStruct.generated.h"

class USSEndingMenuManager;
class USSMenuManager;

USTRUCT(BlueprintType)
struct FEndingMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* SSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSEndingMenuManager* Menu;
    
    SS_API FEndingMenuStruct();
};

