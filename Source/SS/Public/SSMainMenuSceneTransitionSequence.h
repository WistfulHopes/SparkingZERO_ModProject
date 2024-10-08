#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataList.h"
#include "SSMainMenuSceneTransitionSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSMainMenuSceneTransitionSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> SubSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaySection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTransformTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> RelationCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebindLocator;
    
    SS_API FSSMainMenuSceneTransitionSequence();
};

