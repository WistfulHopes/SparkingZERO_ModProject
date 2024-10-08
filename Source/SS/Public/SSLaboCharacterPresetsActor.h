#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSLaboCharacterPresetsActor.generated.h"

class USSLaboCharacterPresetDataAsset;

UCLASS(Blueprintable)
class SS_API ASSLaboCharacterPresetsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSLaboCharacterPresetDataAsset* PresetData;
    
    ASSLaboCharacterPresetsActor(const FObjectInitializer& ObjectInitializer);

};

