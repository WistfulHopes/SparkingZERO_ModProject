#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSRankingLevelScriptActor.generated.h"

class AActor;
class UTexture2D;

UCLASS(Blueprintable)
class ASSRankingLevelScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackgroundTitleTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
public:
    ASSRankingLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

