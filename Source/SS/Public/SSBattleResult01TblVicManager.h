#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01TblVicManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01TblVicManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TexturesNumber;
    
public:
    USSBattleResult01TblVicManager();

};

