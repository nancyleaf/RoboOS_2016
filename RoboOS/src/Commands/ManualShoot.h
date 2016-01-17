#ifndef ManualShoot_H
#define ManualShoot_H

#include "../CommandBase.h"
#include "WPILib.h"

class ManualShoot: public CommandBase
{
public:
	ManualShoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
