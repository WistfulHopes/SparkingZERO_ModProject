#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDragonAdventureIFCTEpisodeResultManager.generated.h"

class USSBuiltInMenu;

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTEpisodeResultManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSDragonAdventureIFCTEpisodeResultManager();

};

