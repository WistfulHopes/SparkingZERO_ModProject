#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KoratAtomCueSheetLoaderActor.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class AKoratAtomCueSheetLoaderActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadFailed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadCompleted, USoundAtomCueSheet*, InCueSheet);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadCompleted OnLoadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadFailed OnLoadFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CueSheetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCueSheetAssetLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCueSheetLoadCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
public:
    AKoratAtomCueSheetLoaderActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLoadAsync(const FName& InCueSheetName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCueSheetLoadFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnCueSheetLoadCompleted(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void OnCueSheetAssetLoadCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAsync(FSoftObjectPath PathForCueSheet);
    
};

