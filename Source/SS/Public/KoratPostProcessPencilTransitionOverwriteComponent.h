#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPencilTransitionColorType.h"
#include "KoratPostProcessChameleonOverwriteComponent.h"
#include "KoratPostProcessPencilTransitionOverwriteComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SS_API UKoratPostProcessPencilTransitionOverwriteComponent : public UKoratPostProcessChameleonOverwriteComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPencilTransitionColorType, FName> DefinedTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefualtColor;
    
public:
    UKoratPostProcessPencilTransitionOverwriteComponent(const FObjectInitializer& ObjectInitializer);

};

