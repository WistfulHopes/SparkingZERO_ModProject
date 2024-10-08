#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConditionalTextList.h"
#include "KoratBattleConditionalTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleConditionalTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConditionalTextList> ClearConditionalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConditionalTextList> AnotherConditionalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConditionalTextList> DefeatConditionalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConditionalTextList> MiracleOrbAnotherConditionalText;
    
    SS_API FKoratBattleConditionalTextData();
};

