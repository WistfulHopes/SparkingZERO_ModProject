#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotify.h"
#include "SSAnimNotify_PlayLevelSequence.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotify_PlayLevelSequence : public USSAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedId;
    
public:
    USSAnimNotify_PlayLevelSequence();

};

