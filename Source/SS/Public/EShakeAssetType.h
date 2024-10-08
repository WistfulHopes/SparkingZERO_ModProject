#pragma once
#include "CoreMinimal.h"
#include "EShakeAssetType.generated.h"

UENUM(BlueprintType)
enum class EShakeAssetType : uint8 {
    Stop,
    Life_SS = 10,
    Life_S,
    Life_M,
    Life_L,
    Life_LL,
    Loop_SS = 110,
    Loop_S,
    Loop_M,
    Loop_L,
    Loop_LL,
    Special_SSW = 210,
    Special_HANDY,
    Special_HANDY_UI_00,
    Special_HANDY_UI_01,
    Special_HANDY_UI_02,
    Special_HANDY_UI_03,
    Test_00 = 250,
    Test_01,
    Test_02,
};

