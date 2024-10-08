#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneParameterSection.h"
#include "KoratByteParameterNameAndCurve.h"
#include "KoratIntParameterNameAndCurve.h"
#include "KoratPointLightParameterSection.generated.h"

UCLASS(Blueprintable)
class SS_API UKoratPointLightParameterSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratByteParameterNameAndCurve> ByteParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratIntParameterNameAndCurve> IntParameterNamesAndCurves;
    
public:
    UKoratPointLightParameterSection();

};

