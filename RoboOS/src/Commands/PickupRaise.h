#ifndef PickupRaise_H
#define PickupRaise_H

#include "../CommandBase.h"
#include "WPILib.h"

class PickupRaise: public CommandBase
{
public:
	PickupRaise();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
