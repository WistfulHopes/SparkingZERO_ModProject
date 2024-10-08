#pragma once
#include "CoreMinimal.h"
#include "SSBattleDebugDrawCharacterText.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleDebugDrawCharacterText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuffText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterNumericText;
    
    SS_API FSSBattleDebugDrawCharacterText();
};

