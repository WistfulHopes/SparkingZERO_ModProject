#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/CameraTypes.h"
#include "FakePersSettings.h"
#include "AnimePersBlueprintLibrary.generated.h"

class UMaterialParameterCollectionInstance;
class UObject;

UCLASS(Blueprintable)
class UAnimePersBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimePersBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateCollectionParameters(UMaterialParameterCollectionInstance* CollectionInstance, const FFakePersSettings& Settings, const FMatrix& View, const FMinimalViewInfo& ViewInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawFrustum(UObject* WorldContextObject, const FFakePersSettings& Settings, const FTransform& CameraTransform, const FMinimalViewInfo& ViewInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCollectionParameters(UMaterialParameterCollectionInstance* CollectionInstance);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCollectionParameters(UMaterialParameterCollectionInstance* CollectionInstance, const FFakePersSettings& Settings);
    
};

