#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SpDebugModelViewerModelHandle.h"
#include "SpDebugModelViewerSpawnCtrlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPRUNTIME_API USpDebugModelViewerSpawnCtrlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchResourcePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecursiveSearchResourcePath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEntryToResidentDebugMenuDefault;
    
    USpDebugModelViewerSpawnCtrlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DeleteModel(FSpDebugModelViewerModelHandle InHandle);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllModels();
    
    UFUNCTION(BlueprintCallable)
    FSpDebugModelViewerModelHandle CreateModel(const FString& InResourcePath, const FTransform& InTransform);
    
};

