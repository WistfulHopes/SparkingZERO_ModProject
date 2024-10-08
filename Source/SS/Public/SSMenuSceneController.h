#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EShakeAssetType.h"
#include "SSMenuSceneController.generated.h"

class AKoratCharacterUIActionManager;
class ASSMenuCharacterManager;
class UKoratSoundManageComponent;
class USSMenuWidget;
class USSUiWidget;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class ASSMenuSceneController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShakeAssetType ShakeAssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlockLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSoundManageComponent* SoundManageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> MenuCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> MenuCueSheetUS;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USSMenuWidget>> InterruptDialogSuspendableWidgets;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USSMenuWidget>> InterruptDialogSuspendingWidgets;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USSUiWidget>> InterruptDialogSuspendableHideWidgets;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USSUiWidget>> InterruptDialogSuspendingHideWidgets;
    
public:
    ASSMenuSceneController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AKoratCharacterUIActionManager* GetUIActionManager();
    
    UFUNCTION(BlueprintCallable)
    ASSMenuCharacterManager* GetMenuCharacterManager();
    
};

