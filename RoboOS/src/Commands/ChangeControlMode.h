#ifndef ChangeControlMode_H
#define ChangeControlMode_H

#include "../CommandBase.h"
#include "WPILib.h"

class ChangeControlMode: public CommandBase
{
public:
	ChangeControlMode();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
