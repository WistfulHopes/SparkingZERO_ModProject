#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSCurrencyType.h"
#include "KoratBGMDataList.h"
#include "KoratBannerDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratShopFloorDataList.h"
#include "KoratShopSalesItemDataList.h"
#include "SSBattleSetupControllerBase.h"
#include "SSShopPurchasedInfoKPI.h"
#include "SSShopMenuController.generated.h"

class UKoratShopMenuDataAsset;
class USSCharacterItemEquipment;
class USSMenuButton;
class USSMenuGeneralDialog;
class USSMenuManager;
class USSMenuViewScroll;
class USSPurchaseConfirmationDialog;
class USSRemoteButton;
class USSShopMenuNetworkManager;

UCLASS(Blueprintable)
class ASSShopMenuController : public ASSBattleSetupControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCameraCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BannerAutoSlideIntervalSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuManager> ClassBaseMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuViewScroll> ClassIconListWidget_Large;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuViewScroll> ClassIconListWidget_Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSPurchaseConfirmationDialog> ClassPurchaseConfirmationDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSPurchaseConfirmationDialog> ClassPurchasedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuManager> ClassItemDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuGeneralDialog> ClassMenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BgmShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseDialogTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseDialogButtonText_Purchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseDialogButtonText_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchasedDialogTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchasedDialogButtonText_Ok;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShopListPurchaseImpossibleText_Shortage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShopListPurchaseImpossibleText_SoldOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShopListPurchaseImpossibleText_StockLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TestBannerFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shopStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime openTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime closeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText infoMess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* BaseMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuViewScroll*> IconListWidget_Large;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuViewScroll*> IconListWidget_Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPurchaseConfirmationDialog* PurchaseConfirmationDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPurchaseConfirmationDialog* PurchasedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuManager* ItemDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* PreviewCharacterItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* CalcCharacterItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratShopFloorDataList> ValidShopFloorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratShopFloorDataList CurrentSelectFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratShopSalesItemDataList> CurrentFloorValidItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratShopSalesItemDataList> SortFilteredFloorItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratShopSalesItemDataList CurrentSelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuViewScroll* CurrentItemListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBannerDataList> CurrentBannerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratShopMenuDataAsset* ShopMenuDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSShopMenuNetworkManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESSCurrencyType, FSSShopPurchasedInfoKPI> ShopPurchasedInfosKPI;
    
public:
    ASSShopMenuController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ChangeShopIconButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBannerButtonContents(USSMenuButton* InHitButton, int32 InDataIndex);
    
};

