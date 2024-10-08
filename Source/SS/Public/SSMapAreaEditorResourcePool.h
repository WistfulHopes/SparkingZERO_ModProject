#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSMapAreaEditorResourceCylinderPoolInfo.h"
#include "SSMapAreaEditorResourcePoolInfo.h"
#include "SSMapAreaEditorResourcePool.generated.h"

class AMapAreaEditGuideBox;
class ASSMapAreaEditGuideCylinder;
class UWorld;

UCLASS(Blueprintable)
class USSMapAreaEditorResourcePool : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMapAreaEditorResourcePoolInfo> GuideActorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMapAreaEditorResourceCylinderPoolInfo> GuideCylinderActorPool;
    
    USSMapAreaEditorResourcePool();

    UFUNCTION(BlueprintCallable)
    void Setup(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void ReturnGuideCylinder(ASSMapAreaEditGuideCylinder* GuideCylinder);
    
    UFUNCTION(BlueprintCallable)
    void ReturnGuideBox(AMapAreaEditGuideBox* GuideBox);
    
    UFUNCTION(BlueprintCallable)
    ASSMapAreaEditGuideCylinder* RentGuideCylinder();
    
    UFUNCTION(BlueprintCallable)
    AMapAreaEditGuideBox* RentGuideBox();
    
    UFUNCTION(BlueprintCallable)
    void Finish(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGuidePoolHealth();
    
};

