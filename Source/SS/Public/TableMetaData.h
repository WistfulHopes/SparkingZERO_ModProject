#pragma once
#include "CoreMinimal.h"
#include "JsonalizableObject.h"
#include "TableMetaData.generated.h"

UCLASS(Blueprintable)
class UTableMetaData : public UJsonalizableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PrimaryKey;
    
    UTableMetaData();

};

