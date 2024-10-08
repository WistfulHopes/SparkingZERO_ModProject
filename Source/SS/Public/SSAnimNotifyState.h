#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Animation/AnimTypes.h"
#include "SSAnimNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMontageNotifyTickType::Type> DefaultMontageTickType;
    
public:
    USSAnimNotifyState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGUID() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FColor GetChangedNotifyColor() const;
    
};

