#include "SpUIRichTextIcon.h"

USpUIRichTextIcon::USpUIRichTextIcon() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->WindowsIconSetObj = NULL;
    this->PS4IconSetObj = NULL;
    this->XBoxIconSetObj = NULL;
    this->SwitchIconSetObj = NULL;
    this->IconMaskSetObj = NULL;
}


