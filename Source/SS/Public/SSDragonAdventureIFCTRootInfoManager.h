#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDragonAdventureIFCTRootInfoManager.generated.h"

class ASSDragonAdventureIFEventLineInfoLocaterActor;

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTRootInfoManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFEventLineInfoLocaterActor* LocaterActor;
    
public:
    USSDragonAdventureIFCTRootInfoManager();

};

