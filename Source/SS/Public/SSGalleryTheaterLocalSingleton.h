#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSGalleryTheaterLocalSingleton.generated.h"

class USSReplayDataUIElement;

UCLASS(Blueprintable)
class USSGalleryTheaterLocalSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSReplayDataUIElement*> ReplayDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSReplayDataUIElement*> DeleteReplayDataArray;
    
public:
    USSGalleryTheaterLocalSingleton();

    UFUNCTION(BlueprintCallable)
    TArray<USSReplayDataUIElement*> GetReplayDataArray();
    
    UFUNCTION(BlueprintCallable)
    TArray<USSReplayDataUIElement*> GetDeleteReplayDataArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSReplayDataUIElement* GetCurrentReplayDataUIElement() const;
    
    UFUNCTION(BlueprintCallable)
    void EmptyDeleteReplayDataArray();
    
};

