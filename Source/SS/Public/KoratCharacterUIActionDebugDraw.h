#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterUIActionDebugDraw.generated.h"

class AKoratCharacterUIActionManager;
class UKoratCharacterUIActionDebugDraw;

UCLASS(Blueprintable)
class UKoratCharacterUIActionDebugDraw : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKoratCharacterUIActionManager* UIActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLineHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
public:
    UKoratCharacterUIActionDebugDraw();

    UFUNCTION(BlueprintCallable)
    static void Update();
    
    UFUNCTION(BlueprintCallable)
    static UKoratCharacterUIActionDebugDraw* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void Destroy();
    
    UFUNCTION(BlueprintCallable)
    static void CreateAndInitialize(AKoratCharacterUIActionManager* InUIActionManager);
    
};

