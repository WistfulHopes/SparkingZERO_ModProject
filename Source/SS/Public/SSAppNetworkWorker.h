#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratRankMatchParam.h"
#include "SSAppNetworkTimer.h"
#include "SSAppNetworkWorker.generated.h"

class USSMenuGeneralDialog;
class USSWaitDialog;

UCLASS(Blueprintable)
class USSAppNetworkWorker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* TransitionErrorDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAppNetworkTimer TransitionDialogTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSWaitDialog* MatchingWaitDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRankMatchParam RankMatchParamLast;
    
public:
    USSAppNetworkWorker();

};

