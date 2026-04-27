#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFDLC2Setting.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFDLC2Setting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ConditionBranchBlockNameAMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> OpenCloseBlockNameAMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ConditionBranchBlockNameBMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> OpenCloseBlockNameBMap;
    
    SS_API FSSDragonAdventureIFDLC2Setting();
};

