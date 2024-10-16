#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSSEditorModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    // Handles for each track editor registration
    FDelegateHandle AttachTrackEditorHandle;
    FDelegateHandle EventSceneFpsCameraTrackEditorHandle;
    FDelegateHandle EventSceneImpactTrackEditorHandle;
    FDelegateHandle LookAtTrackEditorHandle;
    FDelegateHandle OutlineStencilIndexTrackEditorHandle;
    FDelegateHandle UIActionBlendOptionTrackEditorHandle;
    FDelegateHandle ViewSwitchTrackEditorHandle;
    FDelegateHandle BattleSubtitleTrackEditorHandle;
    FDelegateHandle EventSceneTrackEditorHandle;
    FDelegateHandle SoundSceneTrackEditorHandle;
    FDelegateHandle KawaiiPhysicsTrackEditorHandle;
    FDelegateHandle ToonPointLightTrackEditorHandle;
    FDelegateHandle TrailsTrackEditorHandle;
    FDelegateHandle TriggerEffectTrackEditorHandle;

};
