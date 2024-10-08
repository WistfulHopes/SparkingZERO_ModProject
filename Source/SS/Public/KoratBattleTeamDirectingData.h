#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTeamDirectingData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleTeamDirectingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoFormChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoCombine;
    
    SS_API FKoratBattleTeamDirectingData();
};

