//

#pragma once

#include "CoreMinimal.h"
#include "Core\Engine.h"

class FShooterGameEngine : public FEngine
{
public:
	FShooterGameEngine();
	virtual ~FShooterGameEngine();

	virtual void PreInit() override;
	virtual void Init() override;
	virtual void PostInit() override;

	virtual void Tick() override;


protected:
	FWindow* GameWindow;
};

