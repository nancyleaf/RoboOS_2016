#ifndef TOGGLEPICKUP_H
#define TOGGLEPICKUP_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TogglePickup: public Command {
private:
	bool FinishedPickup;
public:
	TogglePickup();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};
#endif
