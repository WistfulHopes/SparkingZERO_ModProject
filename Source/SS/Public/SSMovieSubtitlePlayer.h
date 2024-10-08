#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSMovieSubtitlePlayer.generated.h"

class USSMenuTextUi;
class USSMovieSubtitleDataAssetRecord;

UCLASS(Blueprintable)
class USSMovieSubtitlePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMovieSubtitleDataAssetRecord* MovieSubtitleDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuTextUi* TextAreaUi;
    
public:
    USSMovieSubtitlePlayer();

};

