#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCustomModule: public IModuleInterface {
public:
	virtual void StartupModule() override;
};