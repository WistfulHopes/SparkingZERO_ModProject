#include "SSEditorModule.h"
#include "Modules/ModuleManager.h"
#include "ISequencerModule.h"
#include "KoratTrackEditors.h"

#define LOCTEXT_NAMESPACE "FSSEditorModule"

void FSSEditorModule::StartupModule()
{
    // Get the Sequencer module
    ISequencerModule& SequencerModule = FModuleManager::LoadModuleChecked<ISequencerModule>("Sequencer");

    // Register each custom track editor and store the handles
    // Additional initialization if required
}

void FSSEditorModule::ShutdownModule()
{
    if (FModuleManager::Get().IsModuleLoaded("Sequencer"))
    {
        ISequencerModule& SequencerModule = FModuleManager::GetModuleChecked<ISequencerModule>("Sequencer");

        // Unregister each track editor using the stored handles
    }
}

#undef LOCTEXT_NAMESPACE

// Required to implement the module and register it
IMPLEMENT_MODULE(FSSEditorModule, SSEditor);
