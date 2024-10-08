#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterStencil.h"
#include "KoratPlayerStartDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratPlayerStartDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterStencil Stencil;
    
    SS_API FKoratPlayerStartDataAssetRecord();
};

