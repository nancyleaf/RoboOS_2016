#ifndef SHOOTCONTROLLER_H
#define SHOOTCONTROLLER_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ShootController: public Command {
public:
	ShootController();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool beenPressed;
};
#endif
