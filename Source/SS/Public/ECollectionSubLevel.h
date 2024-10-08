#pragma once
#include "CoreMinimal.h"
#include "ECollectionSubLevel.generated.h"

UENUM(BlueprintType)
enum class ECollectionSubLevel : uint8 {
    WBP_MenuCollection,
    WBP_Customize,
    WBP_Shop,
    WBP_Library,
    WBP_UserSetting,
    WBP_CharaSetting,
    WBP_ItemList,
    WBP_CharaShop,
    WBP_CostumeShop,
    WBP_ItemShop,
    WBP_CharaLibrary,
    WBP_EventLibrary,
    WBP_OtherLibrary,
};

