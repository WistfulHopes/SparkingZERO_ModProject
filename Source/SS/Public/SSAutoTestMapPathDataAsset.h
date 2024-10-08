#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MutualDataAsset.h"
#include "SSAutoTestMapPathDataAsset.generated.h"

UCLASS(Blueprintable)
class USSAutoTestMapPathDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> MapPath;
    
public:
    USSAutoTestMapPathDataAsset();

};

