#pragma once
#include "CoreMinimal.h"
#include "KoratBattleOperationGuideData.h"
#include "SSMenuManager.h"
#include "SSActionListContentManager.generated.h"

class ASSCharacter;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSActionListContentManager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleOperationGuideData> OperationGuideDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesSkillIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    USSActionListContentManager();

    UFUNCTION(BlueprintCallable)
    void SubScroll();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusOnPossible();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
    UFUNCTION(BlueprintCallable)
    void NextPlatformType();
    
    UFUNCTION(BlueprintCallable)
    void ChkList();
    
    UFUNCTION(BlueprintCallable)
    void AddScroll();
    
};

