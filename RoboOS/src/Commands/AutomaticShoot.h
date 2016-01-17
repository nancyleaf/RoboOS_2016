#ifndef AutomaticShoot_H
#define AutomaticShoot_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutomaticShoot: public CommandBase
{
public:
	AutomaticShoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
