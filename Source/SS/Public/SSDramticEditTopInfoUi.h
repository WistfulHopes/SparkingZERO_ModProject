#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramticEditTopInfoUi.generated.h"

class UImage;
class USSDramticBattleBattleDataRecord;
class USSMenuButton;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDramticEditTopInfoUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PlayerCharaIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ComCharaIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* StageNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DifficultyWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> DifficultyStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> RewardWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramticBattleBattleDataRecord* CreatingBattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SaveBattleDataButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramticBattleBattleDataRecord* BeforeEditBattleData;
    
public:
    USSDramticEditTopInfoUi();

    UFUNCTION(BlueprintCallable)
    void SaveCreatingBattleData();
    
};

