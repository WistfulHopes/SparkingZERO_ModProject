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

    const TArray<FBoolParameterNameAndCurve>& GetBoolCurves() const;
    const TArray<FScalarParameterNameAndCurve>& GetScalarCurves() const;
    const TArray<FVectorParameterNameAndCurves>& GetVectorCurves() const;
    const TArray<FVector2DParameterNameAndCurves>& GetVector2DCurves() const;
    const TArray<FColorParameterNameAndCurves>& GetColorCurves() const; 
    const TArray<FKoratByteParameterNameAndCurve>& GetByteParameterNamesAndCurves() const { return ByteParameterNamesAndCurves; }
    const TArray<FKoratIntParameterNameAndCurve>& GetIntParameterNamesAndCurves() const { return IntParameterNamesAndCurves; }
    TArray<FKoratByteParameterNameAndCurve>& GetByteParameterNamesAndCurves() { return ByteParameterNamesAndCurves; }
    TArray<FKoratIntParameterNameAndCurve>& GetIntParameterNamesAndCurves() { return IntParameterNamesAndCurves; }

	void ReconstructChannelProxy_Public();
	virtual void PostLoad() override;

};

