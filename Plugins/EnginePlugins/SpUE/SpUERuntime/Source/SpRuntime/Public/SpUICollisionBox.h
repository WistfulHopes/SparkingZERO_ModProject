#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "SpUICollisionBox.generated.h"

UCLASS(Blueprintable)
class SPRUNTIME_API USpUICollisionBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKeyboardFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BindWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CollisionLeftTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CollisionRightTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CollisionLeftBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CollisionRightBottom;
    
    USpUICollisionBox();

    UFUNCTION(BlueprintCallable)
    void SetCollisionPoint(const FVector2D& LeftTop, const FVector2D& RightTop, const FVector2D& LeftBottom, const FVector2D& RightBottom);
    
};

