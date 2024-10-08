#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSpaceAreaSettingDataList.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSpaceArea.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AKoratSpaceArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaSettingDataList SpaceAreaSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverridingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList ActualSpaceAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList ActualInteractAtbDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ActualPriority;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USceneComponent>> AreaComponents;
    
public:
    AKoratSpaceArea(const FObjectInitializer& ObjectInitializer);

};

