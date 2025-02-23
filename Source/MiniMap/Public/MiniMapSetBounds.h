// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class UMiniMapComponent;

namespace MiniMap
{
	/** Set the transform on a URuntimeVirtualTextureComponent so that it includes the bounds of all associated primitives in the current world. */
	void MINIMAP_API SetBounds(UMiniMapComponent* InComponent);
};
