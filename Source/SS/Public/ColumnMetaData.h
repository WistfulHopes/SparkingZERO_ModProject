#pragma once
#include "CoreMinimal.h"
#include "JsonalizableObject.h"
#include "ColumnMetaData.generated.h"

UCLASS(Blueprintable)
class UColumnMetaData : public UJsonalizableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReferenceTable;
    
    UColumnMetaData();

};

