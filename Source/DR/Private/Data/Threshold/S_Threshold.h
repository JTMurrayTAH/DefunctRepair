#pragma once

#include "S_Threshold.generated.h"

USTRUCT(Blueprintable)
struct FS_Threshold
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category="Thresholds")
	TArray<float> Thresholds;

};
