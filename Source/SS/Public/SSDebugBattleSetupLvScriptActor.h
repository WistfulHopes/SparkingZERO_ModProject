#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCpuLevel.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratMapDataList.h"
#include "SSLevelScriptActor.h"
#include "SSDebugBattleSetupLvScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSDebugBattleSetupLvScriptActor : public ASSLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMapDataList> StageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBGMDataList> BGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList DefaultStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> DefaultCharacter1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> DefaultCharacter2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultSparkingBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleCpuLevel DefaultBattleCpuLevel;
    
    ASSDebugBattleSetupLvScriptActor(const FObjectInitializer& ObjectInitializer);

};

