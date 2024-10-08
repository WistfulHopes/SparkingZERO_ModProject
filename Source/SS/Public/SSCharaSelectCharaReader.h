#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharaReaderLoadData.h"
#include "ECharaSelectCharaReaderStatus.h"
#include "SSCharacterLoadOption.h"
#include "SSCharaSelectCharaReader.generated.h"

UCLASS(Blueprintable)
class USSCharaSelectCharaReader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaReaderLoadData LoadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaReaderLoadData> UnloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaSelectCharaReaderStatus DebugViewStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRemoveCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSCharacterLoadOption CharacterLoadOption;
    
public:
    USSCharaSelectCharaReader();

};

