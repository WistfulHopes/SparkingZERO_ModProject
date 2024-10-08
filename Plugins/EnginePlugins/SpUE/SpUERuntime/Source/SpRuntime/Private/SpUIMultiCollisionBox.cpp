#include "SpUIMultiCollisionBox.h"

USpUIMultiCollisionBox::USpUIMultiCollisionBox() {
    this->IsKeyboardFocusable = true;
    this->FirstFocusCollisionIndex = -1;
}

void USpUIMultiCollisionBox::SetFirstFocusCollision(int32 InIndex) {
}

void USpUIMultiCollisionBox::SetCollisionPoint(int32 InIndex, const FVector2D& LeftTop, const FVector2D& RightTop, const FVector2D& LeftBottom, const FVector2D& RightBottom) {
}


