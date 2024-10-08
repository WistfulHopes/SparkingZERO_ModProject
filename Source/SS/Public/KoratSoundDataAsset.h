#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EKoratBranch.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratSetPlayVoiceData.h"
#include "KoratSoundDataAsset.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class UKoratSoundDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> VoiceCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> VoiceCueSheetUS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundEffectCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterCostumeDataList, TSoftObjectPtr<USoundAtomCueSheet>> EachCostumeVoiceCueSheetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterCostumeDataList, TSoftObjectPtr<USoundAtomCueSheet>> EachCostumeVoiceCueSheetUSMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultAppearanceBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultResultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FKoratBGMDataList> PatternBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> PatternVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSetPlayVoiceData> SetPlayVoiceData;
    
    UKoratSoundDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVoiceCueSheetName(FKoratCharacterCostumeDataList InEquipCostumeDataList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSoundEffectCueSheetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSetPlayVoiceData(const FName& InDataName, FKoratSetPlayVoiceData& OutSetPlayVoiceData, EKoratBranch& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPatternVoice(const FName& InPatternName, FName& OutVoiceCueName, EKoratBranch& OutResult) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteUselessData();
    
};

