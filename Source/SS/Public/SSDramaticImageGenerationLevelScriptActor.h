#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SSDramaticImageGenerationLevelScriptActor.generated.h"

class USSDramaticImageGenerationLevelUi;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class ASSDramaticImageGenerationLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2DDynamic*> CaptureTextures;
    
public:
    ASSDramaticImageGenerationLevelScriptActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USSDramaticImageGenerationLevelUi* GetImageGenerationLevelUi() const;
    
};

