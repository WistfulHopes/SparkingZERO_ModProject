#pragma once
#include "CoreMinimal.h"
#include "PlayerCardMenuStruct.generated.h"

class USSMenuManager;
class USSPlayerCardListMenuManager;
class USSPlayerCardMenuManager;

USTRUCT(BlueprintType)
struct FPlayerCardMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* SSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPlayerCardMenuManager* Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPlayerCardListMenuManager* ListMenu;
    
    SS_API FPlayerCardMenuStruct();
};

