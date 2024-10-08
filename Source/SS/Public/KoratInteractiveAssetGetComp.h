#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineAssetGetComp.h"
#include "KoratInteractiveAssetGetComp.generated.h"

class UKoratFreeTimelineInstanceData;
class UKoratInteractTriggerTypeGetter;
class UKoratInteractiveAtbTypeGetter;
class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratInteractiveAssetGetComp : public UKoratFreeTimelineAssetGetComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DefaultAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKoratInteractiveAtbTypeGetter> AtbTypeGetterBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKoratInteractTriggerTypeGetter> TriggerTypeGetterBlueprint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratInteractiveAtbTypeGetter* AttributeGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratInteractTriggerTypeGetter* TriggerGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
public:
    UKoratInteractiveAssetGetComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTriggerTypeGetterBlueprint(UClass* InTriggerTypeGetterBlueprint);
    
    UFUNCTION(BlueprintCallable)
    void SetAttributeGetter(UKoratInteractiveAtbTypeGetter* InAtbTypeGetter);
    
    UFUNCTION(BlueprintCallable)
    void SetAtbTypeGetterBlueprint(UClass* InAtbTypeGetterBlueprint);
    
};

