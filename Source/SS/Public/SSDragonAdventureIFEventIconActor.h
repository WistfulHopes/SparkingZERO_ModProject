#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFEventIconActor.generated.h"

class ASSDragonAdventureIFEventIconInfoActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class ASSDragonAdventureIFEventIconActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IslandIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MIOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MIIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MIOutActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MIInActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFEventIconInfoActor* IconInfoActor;
    
public:
    ASSDragonAdventureIFEventIconActor(const FObjectInitializer& ObjectInitializer);

};

