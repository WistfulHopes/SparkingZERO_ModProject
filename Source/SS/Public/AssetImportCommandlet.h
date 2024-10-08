#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "AssetImportCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAssetImportCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UAssetImportCommandlet();

};

