#ifndef DriveCommand_H
#define DriveCommand_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class DriveCommand: public Command{
public:
	DriveCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
#endif
