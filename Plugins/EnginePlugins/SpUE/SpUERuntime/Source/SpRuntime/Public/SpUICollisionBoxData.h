#pragma once
#include "CoreMinimal.h"
#include "SpUICollisionAreaData.h"
#include "SpUICollisionNavigationData.h"
#include "SpUICollisionBoxData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FSpUICollisionBoxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BindWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpUICollisionAreaData Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpUICollisionNavigationData Navigation;
    
    SPRUNTIME_API FSpUICollisionBoxData();
};

