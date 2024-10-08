#pragma once
#include "CoreMinimal.h"
#include "SSAllAssetData.generated.h"

USTRUCT(BlueprintType)
struct FSSAllAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DependencyAssetNamesHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DependencyAssetNamesSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReferencerAssetNamesHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReferencerAssetNamesSoft;
    
    SS_API FSSAllAssetData();
};

