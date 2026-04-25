#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataList.h"
#include "SSModeNSRManager.generated.h"

UENUM(BlueprintType)
enum class EKoratModeNSRSelectMode : uint8 {
    None,
    Normal,
    Hard,
    VeryHard,
};

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

    UFUNCTION(BlueprintCallable)
    void SetNSRSelectMode(EKoratModeNSRSelectMode InSelectMode) {}

    UFUNCTION(BlueprintCallable)
    int32 GetWinStreak() { return 0; }

    UFUNCTION(BlueprintCallable)
    EKoratModeNSRSelectMode GetNSRSelectMode() { return SelectMode; }
};
