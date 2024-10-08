#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSpaceAreaManager.generated.h"

class AKoratSpaceArea;
class UKoratSpaceAreaManager;

UCLASS(Blueprintable)
class UKoratSpaceAreaManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UKoratSpaceAreaManager();

    UFUNCTION(BlueprintCallable)
    FKoratSpaceAreaTypeDataList GetSpaceAreaType(const FVector& WorldPoint);
    
    UFUNCTION(BlueprintCallable)
    AKoratSpaceArea* GetSpaceAreaActor(const FVector& WorldPoint);
    
    UFUNCTION(BlueprintCallable)
    static UKoratSpaceAreaManager* GetInstance();
    
};

