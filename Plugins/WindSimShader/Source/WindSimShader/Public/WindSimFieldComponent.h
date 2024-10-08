#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "EWindSimFieldMotorType.h"
#include "EWindSimFieldShaderType.h"
#include "WindSimFieldComponent.generated.h"

class UTexture2D;
class UTextureRenderTargetVolume;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WINDSIMSHADER_API UWindSimFieldComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DebugViewTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTargetVolume* WindField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WindFieldPixelWorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindViscous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPoissonSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindSimFieldShaderType ShaderType;
    
    UWindSimFieldComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWindViscous(float viscous);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetShaderType(EWindSimFieldShaderType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetPoissonSteps(int32 steps);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSimulation(bool bInActiveSimulation);
    
    UFUNCTION(BlueprintCallable)
    void ResetWindField();
    
    UFUNCTION(BlueprintCallable)
    void Move(const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveSimulation() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorldFieldSize(FVector& Size) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindViscous() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWindSimFieldShaderType GetShaderType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoissonSteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFieldDimension(FVector& Dimension) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddInputDataLocal(EWindSimFieldMotorType Type, const FVector& Pos, const FVector& vec, float Radius, float Power, float fade_rate);
    
    UFUNCTION(BlueprintCallable)
    bool AddInputData(EWindSimFieldMotorType Type, const FVector& Location, const FVector& vec, float Radius, float Power, bool Impulse, float fade_rate);
    
};

