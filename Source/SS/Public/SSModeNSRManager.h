#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKoratModeNSRSelectMode.h"
#include "KoratCharacterDataList.h"
#include "SSModeNSRManager.generated.h"

UCLASS(Blueprintable)
class SS_API USSModeNSRManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratModeNSRSelectMode SelectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList SelectComCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Rezult_NewWinStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Rezult_NewDp;
    
    USSModeNSRManager();

    UFUNCTION(BlueprintCallable)
    void SetNSRSelectMode(EKoratModeNSRSelectMode InSelectMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinStreak() const;
    
    UFUNCTION(BlueprintCallable)
    EKoratModeNSRSelectMode GetNSRSelectMode();
    
};

