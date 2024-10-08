#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SSKoratVersionBattle.h"
#include "SSKoratVersionContent.h"
#include "SSKoratVersionDrama.h"
#include "SSKoratVersionMajor.h"
#include "SSKoratVersionSaveData.h"
#include "SSKoratVersionServer.h"
#include "SSVersionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class USSVersionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSKoratVersionMajor MajorVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSKoratVersionContent ContentVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSKoratVersionBattle BattleVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSKoratVersionDrama DramaVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSKoratVersionSaveData SaveDataVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSKoratVersionServer ServerVersion;
    
    USSVersionSettings();

};

