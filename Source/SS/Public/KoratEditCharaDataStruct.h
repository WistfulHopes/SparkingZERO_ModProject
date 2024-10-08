#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCharacter.h"
#include "KoratDramaticGuestCharacterStruct.h"
#include "KoratEditCharaDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FKoratEditCharaDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleCharacter> BeforeAlliesTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleCharacter> BeforeEnemyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticGuestCharacterStruct> BeforeGuestCharacterArray;
    
    SS_API FKoratEditCharaDataStruct();
};

