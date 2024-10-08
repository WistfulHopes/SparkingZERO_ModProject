#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorCutType.h"
#include "KoratCharacterDataList.h"
#include "KoratMapDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSDebugCutEditorTestSetting.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugCutEditorTestSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList StageDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterDataLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> CharacterStartDataLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorCutType CutType;
    
    SS_API FSSDebugCutEditorTestSetting();
};

