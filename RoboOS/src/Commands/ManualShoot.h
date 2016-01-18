#ifndef MANUALSHOOT_H
#define MANUALSHOOT_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ManualShoot: public Command {
public:
	ManualShoot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool FinishedShoot;
};
#endif
