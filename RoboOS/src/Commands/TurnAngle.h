#ifndef TURNANGLE_H
#define TURNANGLE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TurnAngle: public Command {
public:
	TurnAngle(double Angle);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
    double m_Angle;
};

#endif
