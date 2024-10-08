#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSChameleon.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ASSChameleon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnboundParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool b2DTransformProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActorFeatureProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlcoholProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCrossGlareSeaSurfaceProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAnamorphicLensFlareProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bASCIIProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bChannelClamperProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bChannelSwapperProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCirclesProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bColoredAOProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bColorizeProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bComicProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomDepthHighlighterProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomDepthHighlighterClipProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCyberScanProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDigitizeProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDistanceDistortionProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDistanceFogProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDrawingProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDrugProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEdgeDetectProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmbossProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFrostProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGlitchProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGradientFogProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGridCellProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHardEmbossProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHauntedProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHuePannerProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInfectedProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInvertProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKaleidoscopeProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKuwabaraProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLetterboxingProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLOOKColorGradingProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMagicTransitionsProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMeltedWorldProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMojoProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMonitorEffectsProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMonochromeProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMosaicProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeonProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPixelDissolveProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPulseProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRadialBlurProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScratchesProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScreenDamageProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScreenDecalProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScreenDropProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScreenFireProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSelectiveColorProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSharpenProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSketchProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSnowProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSonarProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpeedLinesProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSquaresProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTilesProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bToonShadingProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTVNoiseProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWiredProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWorldSplashProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWorldGlitchProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bZoneProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bComponentProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCameraShakeProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLenzProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFakeLensFlareProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKoratBloomProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDrmarizeProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bParaLightsProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBleachProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlurProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScreenWaveProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIridescentProg;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnboundsProg;
    
    ASSChameleon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldSplashProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldGlitchProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWiredProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnboundsProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTVNoiseProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToonShadingProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTilesProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquaresProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeedLinesProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSonarProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnowProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSketchProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSharpenProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectiveColorProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenWaveProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenFireProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenDropProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenDecalProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenDamageProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScratchesProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRadialBlurProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPulseProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPixelDissolveProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParaLightsProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeonProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMosaicProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMonochromeProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMonitorEffectsProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMojoProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeltedWorldProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagicTransitionsProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLOOKColorGradingProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLetterboxingProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLenzProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKuwabaraProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKoratBloomProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKaleidoscopeProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIridescentProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvertProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfectedProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHuePannerProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHauntedProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardEmbossProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGridCellProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGradientFogProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlitchProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrostProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFakeLensFlareProg() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExecution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmbossProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeDetectProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrugProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrmarizeProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawingProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDistanceFogProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDistanceDistortionProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDigitizeProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCyberScanProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomDepthHighlighterProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomDepthHighlighterClipProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossGlareSeaSurfaceProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComponentProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComicProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsColorizeProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsColoredAOProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCirclesProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChannelSwapperProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChannelClamperProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraShakeProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlurProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBleachProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsASCIIProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnamorphicLensFlareProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlcoholProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorFeatureProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is2DTransformProg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorrectCrossGlareSeaSurfaceSteps(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorrectBlurSamples(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorrectBloomSumpling(const float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorrectAnamorphicLensFlaresSteps(const float Value) const;
    
};

