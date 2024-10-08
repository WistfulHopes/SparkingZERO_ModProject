#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticRightWindowEmoteUi.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticRightWindowEmoteUi : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ImageTextures;
    
    USSDramaticRightWindowEmoteUi();

};

