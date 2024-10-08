#pragma once
#include "CoreMinimal.h"
#include "KoratChangeCharacterActionDataList.h"
#include "KoratCharacterDataChangeCharacterActionDataList.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataChangeCharacterActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList ChangeCharacterAction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList ChangeCharacterAction2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList ChangeCharacterAction3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList ChangeCharacterAction4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList ChangeCharacterAction5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList ChangeCharacterSpecialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList UnionSupportCharacterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChangeCharacterActionDataList UnionCharacterAction;
    
    SS_API FKoratCharacterDataChangeCharacterActionDataList();
};

