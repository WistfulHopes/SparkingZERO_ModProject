#pragma once
#include "CoreMinimal.h"
#include "KoratDownLoadContentsDataList.h"
#include "SSSummonTicketSaveData.h"
#include "SSMythicalOrbListSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSMythicalOrbListSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PosessedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrbTotalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WishComeTrueCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDownLoadContentsDataList, FSSSummonTicketSaveData> SummonTickets;
    
    SS_API FSSMythicalOrbListSaveData();
};

