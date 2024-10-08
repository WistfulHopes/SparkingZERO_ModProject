#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "KoratInteractAttributeData.h"
#include "KoratFreeTimelineAssetGetComp.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratFreeTimelineAssetGetComp : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratInteractAttributeData EffectInteractData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssetPathByProgram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LoadedDefaultAsset;
    
public:
    UKoratFreeTimelineAssetGetComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetAssetSoftObjectPath(const FSoftObjectPath InSoftObjectAssetPath);
    
};

