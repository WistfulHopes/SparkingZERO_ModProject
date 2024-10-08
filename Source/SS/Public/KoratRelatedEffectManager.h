#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratRelatedEffectRelation.h"
#include "KoratRelatedEffectManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class UKoratRelatedEffectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FKoratRelatedEffectRelation> RelationMap;
    
public:
    UKoratRelatedEffectManager();

    UFUNCTION(BlueprintCallable)
    void Unregister(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SwitchSource(UObject* oldSource, UObject* newSource);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnCheckActor(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void ShowRelated(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRelated(UObject* Source, bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllHide();
    
    UFUNCTION(BlueprintCallable)
    void RelatedActorSwitchSource(AActor* Target, UObject* oldSource, UObject* newSource);
    
    UFUNCTION(BlueprintCallable)
    void Register(AActor* Target, UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetActorType(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void HideRelated(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    void DestroyRelatedAndSource(AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    void DestroyRelated(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    static void DebugDummp();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

