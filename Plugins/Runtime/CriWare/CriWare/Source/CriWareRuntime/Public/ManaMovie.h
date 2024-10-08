#pragma once
#include "CoreMinimal.h"
#include "ManaAudioTrackInfo.h"
#include "ManaEventPointInfo.h"
#include "ManaSource.h"
#include "ManaSubtitleTrackInfo.h"
#include "ManaVideoTrackInfo.h"
#include "ManaMovie.generated.h"

UCLASS(Abstract, Blueprintable)
class CRIWARERUNTIME_API UManaMovie : public UManaSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaVideoTrackInfo> VideoTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaVideoTrackInfo> AlphaTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaAudioTrackInfo> AudioTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaEventPointInfo> EventPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FManaSubtitleTrackInfo> SubtitleTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubtitleChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSubtitleSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBufferSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChunkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAlpha: 1;
    
public:
    UManaMovie();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
};

