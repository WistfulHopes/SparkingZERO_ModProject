#include "SSShopSalesItemDataAsset.h"

USSShopSalesItemDataAsset::USSShopSalesItemDataAsset() {
    this->SortId = 0;
    this->DisplaySortId = 0;
    this->SaleState = ESSShopItemSaleState::Sales;
    this->Currency = ESSCurrencyType::None;
    this->Price = 2147483647;
    this->UnLockType = EKoratShopUnLockType::None;
    this->ConditionPlayerRank = -1;
}

void USSShopSalesItemDataAsset::AutoGenerateDataAsset() {
}


