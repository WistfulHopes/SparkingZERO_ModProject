#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EWindSimFieldMotorType.h"
#include "EWindSimFieldShaderType.h"
#include "WindSimFieldManagerComponent.generated.h"

class AActor;
class UMaterialParameterCollection;
class UWindSimFieldComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WINDSIMSHADER_API UWindSimFieldManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWindSimFieldComponent* FieldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FieldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulationTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulationTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindViscous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPoissonSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindSimFieldShaderType ShaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FieldLocationParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldLocationParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PlayerLocationParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerLocationParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerLocationOffset;
    
    UWindSimFieldManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupParameterCollectionInstanceForPlayerLocaion(UMaterialParameterCollection* Collection, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void SetupParameterCollectionInstanceForFieldLocaion(UMaterialParameterCollection* Collection, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    bool AddInputWindVelocity(EWindSimFieldMotorType InType, const FVector& InLocation, const FVector& InVector, float InRadius, float InPower, bool InImpulse);
    
};

