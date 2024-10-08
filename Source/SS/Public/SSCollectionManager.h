#pragma once
#include "CoreMinimal.h"
#include "SSStandardMenuManager.h"
#include "SSCollectionManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSCollectionManager : public USSStandardMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 subMenu;
    
    USSCollectionManager();

};

