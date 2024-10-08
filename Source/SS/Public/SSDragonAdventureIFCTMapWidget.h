#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSDragonAdventureIFCTMapWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSDragonAdventureIFCTMapWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChildWidgetName;
    
public:
    USSDragonAdventureIFCTMapWidget();

    UFUNCTION(BlueprintCallable)
    void Request(const int32 InRequest);
    
};

