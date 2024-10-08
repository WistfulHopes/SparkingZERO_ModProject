#pragma once
#include "CoreMinimal.h"
#include "ETansitionLevelSequenceType.h"
#include "KoratUILevelDataList.h"
#include "SSTravelCharacter.h"
#include "SSSubLevelTravelInfo.generated.h"

class ASSLevelSequenceActor;
class ULevelStreamingDynamic;
class UWorld;

USTRUCT(BlueprintType)
struct FSSSubLevelTravelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUILevelDataList UILevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETansitionLevelSequenceType TansitionLevelSequenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* TransitionLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> AssetContainerSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* AssetContainerLevelStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> LightSubLevelToPassTheSequene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSTravelCharacter> TravelCharacters;
    
    SS_API FSSSubLevelTravelInfo();
};

