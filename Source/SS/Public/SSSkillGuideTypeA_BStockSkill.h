#pragma once
#include "CoreMinimal.h"
#include "SSSkillGuideBase.h"
#include "SSSkillGuideTypeA_BStockSkill.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSSkillGuideTypeA_BStockSkill : public USSSkillGuideBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> NumberTextures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StockCountMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StockCountMaterial2;
    
public:
    USSSkillGuideTypeA_BStockSkill();

};

