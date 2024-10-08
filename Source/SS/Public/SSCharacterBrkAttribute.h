#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratMapAttributeDataList.h"
#include "SSCharacterBrkAttribute.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSCharacterBrkAttribute : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> KnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> KnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> RadialKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> RadialKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ConeKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ConeKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> LinearKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> LinearKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> SlashingKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> SlashingKnowStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ArcLeftKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ArcLeftKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ArcRightKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> ArcRightKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> SphericalKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> SphericalKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> NewtonKnockWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> NewtonKnockStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapAttributeDataList, TSoftObjectPtr<ULevelSequence>> GreatDestructionKnock;
    
    USSCharacterBrkAttribute();

};

