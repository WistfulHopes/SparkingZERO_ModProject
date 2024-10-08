#pragma once
#include "CoreMinimal.h"
#include "SSStandardMenuManager.h"
#include "SSMissionManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMissionManager : public USSStandardMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 subMenu;
    
    USSMissionManager();

};

