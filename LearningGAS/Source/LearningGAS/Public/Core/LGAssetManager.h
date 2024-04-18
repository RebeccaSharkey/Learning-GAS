// Copyright - SPXCEBXR GAMES

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "LGAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGGAS_API ULGAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	virtual void StartInitialLoading() override;
	
};
