#pragma once
#include "CoreMinimal.h"
#include "EKoratCharaSortMenuElementsType.h"
#include "EKoratSortType.h"
#include "KoratCharacterFilterDataList.h"
#include "SSBattleSetupUserDataCharacterSortFilter.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataCharacterSortFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterFilterDataList> Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharaSortMenuElementsType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSortType SortOrder;
    
    SS_API FSSBattleSetupUserDataCharacterSortFilter();
};

