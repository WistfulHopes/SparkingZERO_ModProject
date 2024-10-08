#pragma once
#include "CoreMinimal.h"
#include "KoratIconTitleDataList.h"
#include "KoratTextTitleDataList.h"
#include "SSTournamentReservedTeamCharacter.h"
#include "SSTournamentReservedTeamData.generated.h"

USTRUCT(BlueprintType)
struct FSSTournamentReservedTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBossTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratIconTitleDataList IconTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTextTitleDataList TextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTournamentReservedTeamCharacter> Members;
    
    SS_API FSSTournamentReservedTeamData();
};

