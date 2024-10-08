#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePracticsMenuDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratDramaticBattleTipsDataList.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingCommandDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBattleTrainingCommandDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Instructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Guidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Commentary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleTipsDataList CommentTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePracticsMenuDataList AI;
    
    USSBattleTrainingCommandDataAsset();

};

