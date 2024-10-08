#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataList.h"
#include "BattleSetupPlayerStarts.generated.h"

USTRUCT(BlueprintType)
struct FBattleSetupPlayerStarts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> TeamMembersPlaceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> TeamMembersPlaceLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> TeamMembersPlaceSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> CharacterChangePlaceList;
    
    SS_API FBattleSetupPlayerStarts();
};

