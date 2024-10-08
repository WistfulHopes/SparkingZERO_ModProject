#pragma once
#include "CoreMinimal.h"
#include "KoratBattleConversation.h"
#include "SSIntInequality.h"
#include "KoratTutorialDialog.generated.h"

USTRUCT(BlueprintType)
struct FKoratTutorialDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHPPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSIntInequality HPCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSIntInequality DistanceCondition;
    
    SS_API FKoratTutorialDialog();
};

