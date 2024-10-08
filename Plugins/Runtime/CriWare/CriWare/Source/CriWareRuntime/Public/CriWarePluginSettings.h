#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AtomAsrRackConfig.h"
#include "AtomAsrRackConfigUI.h"
#include "EAtomSoundRendererType.h"
#include "CriWarePluginSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class CRIWARERUNTIME_API UCriWarePluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoExistCriWareIni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditableCriWareAdxLipSyncSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath NonAssetContentDir;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentDir;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBinders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBinds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoaders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OutputsLogFileSystem;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_FileAccessThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_DataDecompressionThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_MemoryFileSystemThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_FileAccessThreadPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_DataDecompressionThreadPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_MemoryFileSystemThreadPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticallyCreateCueAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesInGamePreview;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OutputsLogAtom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath AwbRootDirectory;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AwbRoot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonitorCommunicationBufferSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsrOutputChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVirtualVoices;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStandardMemoryVoices;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StandardMemoryVoiceNumChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StandardMemoryVoiceSamplingRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStandardStreamingVoices;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StandardStreamingVoiceNumChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StandardStreamingVoiceSamplingRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PoolAtomComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AtomConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcfFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AtomConfigDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AtomOutputPortDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtomSoundRendererType SoundRendererTypeUI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundRendererType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAsrRackConfigUI> AsrRackConfigUI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAsrRackConfig> AsrRackConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hardware1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hardware2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hardware3;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hardware4;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EconomicTickMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EconomicTickFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingMarginDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HcaMxVoiceSamplingRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHcaMxMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HcaMxMemoryVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHcaMxStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HcaMxStreamingVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WASAPI_IsExclusive;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WASAPI_BitsPerSample;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WASAPI_SamplingRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WASAPI_NumChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseUnrealSoundRenderer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmartPhone_UseSonicSYNC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_ServerThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_OutputThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_ServerThreadPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_OutputThreadPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PS4_UseAudio3d;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_NumberOfAudio3dMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_SamplingRateOfAudio3dMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_NumberOfAudio3dStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS4_SamplingRateOfAudio3dStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS5_MaxChannelPorts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_NumOpusMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_OpusMemoryVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_OpusMemoryVoiceSamplingRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_NumOpusStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_OpusStreamingVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_OpusStreamingVoiceSamplingRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitializeMana;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDecodeSkip;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecoderHandles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxManaBPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxManaStreams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseH264Decoder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDecoderOutputBuffers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceSoftwareDecodingOnXboxOne;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceSoftwareDecodingOnXboxSeries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitializeAdxLipSync;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumAnalyzerHandles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseManaStartupMovies;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bWaitForMoviesToComplete;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bMoviesAreSkippable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> StartupMovies;
    
    UCriWarePluginSettings();

};

