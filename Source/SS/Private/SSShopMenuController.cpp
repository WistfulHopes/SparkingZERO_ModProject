#include "SSShopMenuController.h"

ASSShopMenuController::ASSShopMenuController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BannerAutoSlideIntervalSec = 3.00f;
    this->shopStatus = 0;
    this->BaseMenuWidget = NULL;
    this->PurchaseConfirmationDialog = NULL;
    this->PurchasedDialog = NULL;
    this->ItemDetailWidget = NULL;
    this->MenuGeneralDialog = NULL;
    this->PreviewCharacterItemEquipment = NULL;
    this->CalcCharacterItemEquipment = NULL;
    this->CurrentItemListWidget = NULL;
    this->ShopMenuDataAsset = NULL;
    this->NetworkManager = NULL;
}

void ASSShopMenuController::ChangeShopIconButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSShopMenuController::ChangeBannerButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}


