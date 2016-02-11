#ifndef DRIVECONTROLLER_H
#define DRIVECONTROLLER_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class DriveController: public Command {
public:
	DriveController();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
};

#endif
