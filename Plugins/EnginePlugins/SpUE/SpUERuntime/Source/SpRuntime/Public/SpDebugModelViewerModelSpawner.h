#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpDebugModelViewerModelHandle.h"
#include "SpDebugModelViewerModelSpawner.generated.h"

class AActor;
class USpDebugModelViewerModelCtrlComponent;

UCLASS(Blueprintable)
class SPRUNTIME_API USpDebugModelViewerModelSpawner : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpDebugModelViewerModelSpawner();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsManageModel(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSpDebugModelViewerModelHandle GetModelHandle(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USpDebugModelViewerModelCtrlComponent* GetModelCtrlComponent(FSpDebugModelViewerModelHandle InHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetModel(FSpDebugModelViewerModelHandle InHandle);
    
};

