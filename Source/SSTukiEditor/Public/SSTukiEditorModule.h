#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSSTukiEditorModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    // Handles for each track editor registration
    FDelegateHandle TukiAttachTrackEditorHandle;
    FDelegateHandle TukiBattleSubtitleTrackEditorHandle;
    FDelegateHandle TukiKawaiiPhysicsTrackEditorHandle;
    FDelegateHandle TukiFreeMaterialTrackEditorHandle;
    FDelegateHandle TukiVisibilityTrackEditorHandle;
    FDelegateHandle TukiViewSwitchTrackEditorHandle;
    FDelegateHandle TukiToonPointLightTrackEditorHandle;
    FDelegateHandle TukiEventSceneTrackEditorHandle;
    FDelegateHandle TukiEventSceneFpsCameraTrackEditorHandle;
    FDelegateHandle TukiEventSceneImpactTrackEditorHandle;
    FDelegateHandle TukiLookAtTrackEditorHandle;
    FDelegateHandle TukiUIActionBlendOptionTrackEditorHandle;
    FDelegateHandle TukiTrailsTrackEditorHandle;
    FDelegateHandle TukiOutlineStencilIndexTrackEditorHandle;
    FDelegateHandle TukiTriggerEffectTrackEditorHandle;
    FDelegateHandle TukiSoundSceneTrackEditorHandle;

};
