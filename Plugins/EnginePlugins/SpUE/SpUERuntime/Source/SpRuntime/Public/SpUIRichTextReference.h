#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "SpUIRichTextReference.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class SPRUNTIME_API USpUIRichTextReference : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlaceSet;
    
public:
    USpUIRichTextReference();

};

