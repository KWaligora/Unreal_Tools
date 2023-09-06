#pragma once

#include "CoreMinimal.h"
#include "Blutility/Classes/AssetActionUtility.h"
#include "QuickAssetAction.generated.h"

UCLASS()
class SUPERMANAGER_API UQuickAssetAction : public UAssetActionUtility
{
	GENERATED_BODY()

public:
	UFUNCTION(CallInEditor)
	void TestFunction();
};
