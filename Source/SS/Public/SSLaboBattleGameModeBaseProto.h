#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "KoratPlayerStartDataList.h"
#include "SSBattleGameModeBase.h"
#include "SSLaboBattleGameModeBaseProto.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class ASSLaboBattleGameModeBaseProto : public ASSBattleGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> PlayCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipApearSceneStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SeamlessTravelActorList;
    
    ASSLaboBattleGameModeBaseProto(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipApearSceneStart() const;
    
};

