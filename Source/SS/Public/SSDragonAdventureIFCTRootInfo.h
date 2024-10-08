#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFCTRootInfo.generated.h"

class USSDragonAdventureIFCTRootInfoManager;

UCLASS(Blueprintable)
class ASSDragonAdventureIFCTRootInfo : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDragonAdventureIFCTRootInfoManager*> RootInfoManagerArray;
    
public:
    ASSDragonAdventureIFCTRootInfo(const FObjectInitializer& ObjectInitializer);

};

