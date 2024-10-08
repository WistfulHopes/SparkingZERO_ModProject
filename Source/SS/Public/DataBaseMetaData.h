#pragma once
#include "CoreMinimal.h"
#include "JsonalizableObject.h"
#include "DataBaseMetaData.generated.h"

UCLASS(Blueprintable)
class UDataBaseMetaData : public UJsonalizableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> Tables;
    
    UDataBaseMetaData();

};

