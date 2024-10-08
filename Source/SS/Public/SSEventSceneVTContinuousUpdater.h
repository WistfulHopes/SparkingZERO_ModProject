#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratMapDataList.h"
#include "SSEventSceneVTContinuousUpdater.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ASSEventSceneVTContinuousUpdater : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKoratMapDataList> EnableMaps;
    
public:
    ASSEventSceneVTContinuousUpdater(const FObjectInitializer& ObjectInitializer);

};

