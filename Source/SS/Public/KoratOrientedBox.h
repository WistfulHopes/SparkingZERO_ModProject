#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratOrientedBox.generated.h"

USTRUCT(BlueprintType)
struct FKoratOrientedBox : public FOrientedBox {
    GENERATED_BODY()
public:
    SS_API FKoratOrientedBox();
};

