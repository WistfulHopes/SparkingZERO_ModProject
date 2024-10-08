#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "OnSSCharaSelectCharaIconEvnetDelegate.h"
#include "SSMenuManager.h"
#include "SSCharaSelectTeamList.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSCharaSelectTeamList : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaIconEvnet OnCharaPanelFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSCharaSelectCharaIconEvnet OnCharaPanelDecided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyFaceTexture;
    
    USSCharaSelectTeamList();

private:
    UFUNCTION(BlueprintCallable)
    void FocusedStartButton();
    
    UFUNCTION(BlueprintCallable)
    void FocusedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData);
    
    UFUNCTION(BlueprintCallable)
    void DecidedPanel(UObject* InObject, const FKoratCharacterDataList& InCharacterData);
    
};

