#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDramaticWLibSearchCharacterSelect.generated.h"

class USSBattleSetupNameList;
class USSMenuButton;
class USSMenuHoldButtonSet;
class USSMenuViewScroll;
class USSOperationGuideSet;
class USSRemoteButton;
class USSSortFilterDialog;

UCLASS(Blueprintable)
class ASSDramaticWLibSearchCharacterSelect : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleSetupNameList* NameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* TeamWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* CharaListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuHoldButtonSet* SearchButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterDialog* SortFilterDialog;
    
public:
    ASSDramaticWLibSearchCharacterSelect(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ChangeTeamListButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaListButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex);
    
};

