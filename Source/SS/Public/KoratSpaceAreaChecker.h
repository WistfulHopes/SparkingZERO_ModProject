#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSpaceAreaChecker.generated.h"

UCLASS(Blueprintable)
class AKoratSpaceAreaChecker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList SpaceAreaType;
    
public:
    AKoratSpaceAreaChecker(const FObjectInitializer& ObjectInitializer);

};

