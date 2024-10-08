#pragma once
#include "CoreMinimal.h"
#include "SSLevelSequencePlayer.h"
#include "KoratFreeTimelinePlayer.generated.h"

class AActor;

UCLASS(Blueprintable)
class UKoratFreeTimelinePlayer : public USSLevelSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerOwner;
    
public:
    UKoratFreeTimelinePlayer(const FObjectInitializer& ObjectInitializer);

};

