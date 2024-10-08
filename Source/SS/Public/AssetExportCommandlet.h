#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "AssetExportCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAssetExportCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UAssetExportCommandlet();

};

