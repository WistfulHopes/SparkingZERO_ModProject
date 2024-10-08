#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "SpUICollisionBoxData.h"
#include "SpUIMultiCollisionBox.generated.h"

UCLASS(Blueprintable)
class SPRUNTIME_API USpUIMultiCollisionBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKeyboardFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstFocusCollisionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpUICollisionBoxData> Collisions;
    
    USpUIMultiCollisionBox();

    UFUNCTION(BlueprintCallable)
    void SetFirstFocusCollision(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionPoint(int32 InIndex, const FVector2D& LeftTop, const FVector2D& RightTop, const FVector2D& LeftBottom, const FVector2D& RightBottom);
    
};

