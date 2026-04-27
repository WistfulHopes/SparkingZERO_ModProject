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

};
