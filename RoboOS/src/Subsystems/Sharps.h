#ifndef Sharps_H
#define Sharps_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Sharps: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Sharps();
	void InitDefaultCommand();
};

#endif
