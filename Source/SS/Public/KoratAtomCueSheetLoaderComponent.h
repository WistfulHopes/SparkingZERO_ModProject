#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtomCueSheetLoaderComponent.h"
#include "KoratAtomCueSheetLoaderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratAtomCueSheetLoaderComponent : public UAtomCueSheetLoaderComponent {
    GENERATED_BODY()
public:
    UKoratAtomCueSheetLoaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupAndLoad(const FSoftObjectPath& InPath);
    
    UFUNCTION(BlueprintCallable)
    void OnCueSheetLoadFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnCueSheetLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoad();
    
};

