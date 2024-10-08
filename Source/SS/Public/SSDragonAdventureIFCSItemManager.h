#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDragonAdventureIFCSItemManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCSItemManager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowNum;
    
    USSDragonAdventureIFCSItemManager();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInfo();
    
};

