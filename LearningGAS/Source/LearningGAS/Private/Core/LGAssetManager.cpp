// Copyright - SPXCEBXR GAMES

#include "Core/LGAssetManager.h"

#include "AbilitySystemGlobals.h"
#include "Helpers/HelperMacros.h"
#include "Helpers/LogCategories.h"

void ULGAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	UAbilitySystemGlobals::Get().InitGlobalData();

	LOG_INFO(LogAssetManagerCustom, "Custom Asset Manager Initialised")
}
