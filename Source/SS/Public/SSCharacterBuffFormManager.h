#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratBuffFormTypeDataList.h"
#include "SSBuffFormRequest.h"
#include "SSCharacterBuffFormManager.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class USSCharacterBuffFormManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSBuffFormRequest> Requests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> SortedRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextStyleID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASSLevelSequenceActor>> PlayingSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> PlayingColorChangeSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratBuffFormTypeDataList PlayingBuffFormType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FrameNumber;
    
public:
    USSCharacterBuffFormManager();

};

