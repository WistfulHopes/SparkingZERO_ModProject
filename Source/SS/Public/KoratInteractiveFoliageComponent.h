#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "EKoratGrassStatus.h"
#include "KoratInteractiveFoliageComponent.generated.h"

class AKoratGrassTransformer;
class UKoratInteractiveFoliageComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratInteractiveFoliageComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> OriginalInstanceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DuplicatedInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnDeformAtFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AKoratGrassTransformer*> Transformers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> WaitingToResumeGrowList;
    
public:
    UKoratInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopUpdateTransformerInstances(const TArray<int32>& Instances);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 SetupOriginalTransformsToDevidedComponentsDiv(const FVector& UpperLeft, float ChunkSize, int32 ChunkAmountX, UPARAM(Ref) TArray<UKoratInteractiveFoliageComponent*>& ChunkedComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetupOriginalTransformsToDevidedComponents(const FVector& UpperLeft, float ChunkSize, int32 ChunkAmountX, UPARAM(Ref) TArray<UKoratInteractiveFoliageComponent*>& ChunkedComponents);
    
    UFUNCTION(BlueprintCallable)
    int32 SetupDevidedComponents(UPARAM(Ref) TArray<UKoratInteractiveFoliageComponent*>& ChunkedComponents, int32 MaxAdd);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGrassTransformer(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGrassStatusIfGrassWaitingToResumeGrow(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGrassStatus(int32 InstanceIndex, EKoratGrassStatus Status);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassWaitingToResumeGrow(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassUnTrampling(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassUnDeforming(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassTrampled(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassGrowing(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassFreshlyDeformed(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassDeformed(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassChangingTransform(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassBurnt(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetInstancesOverlappingMultiSphereTrace_InstancedStaticMesh(const FVector& Start, const FVector& END, float Radius);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetInstancesOverlappingMultiSphereTrace_Hierarchial(const FVector& Start, const FVector& END, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrassWaitingToResumeGrowAlpha(int32 InstanceIndex) const;
    
    UFUNCTION(BlueprintCallable)
    AKoratGrassTransformer* GetGrassTransformer(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddGrassTransformer(int32 InstanceIndex, AKoratGrassTransformer* Transformer);
    
    UFUNCTION(BlueprintCallable)
    void AddGrassStatusWaitingResumeGrowIfNeedUnDeform(int32 InstanceIndex, float ResumeAlpha);
    
    UFUNCTION(BlueprintCallable)
    void AddGrassStatus(int32 InstanceIndex, EKoratGrassStatus Status);
    
};

