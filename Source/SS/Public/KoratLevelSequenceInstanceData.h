#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DefaultLevelSequenceInstanceData.h"
#include "KoratLevelSequenceInstanceData.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class UKoratLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePostOverrideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePostOverrideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePostOverrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PostOverrideTransformOrigin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransformOriginComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransformOriginSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformOriginComponent;
    
public:
    UKoratLevelSequenceInstanceData(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    USceneComponent* FindTransformOriginComponent(AActor* InParentActor, const FName& InComponentName, const FName& InSocketName) const;
    
};

