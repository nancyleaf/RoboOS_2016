#ifndef INTERUPT_H
#define INTERUPT_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Interupt: public Command {
public:
	Interupt();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
};
#endif
