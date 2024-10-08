#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SSDramaticEditImageSaveData.generated.h"

UCLASS(Blueprintable)
class SS_API USSDramaticEditImageSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureImage;
    
    USSDramaticEditImageSaveData();

};

