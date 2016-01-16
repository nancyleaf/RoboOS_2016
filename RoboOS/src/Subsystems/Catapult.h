#ifndef Catapult_H
#define Catapult_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Catapult: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Catapult();
	void InitDefaultCommand();
};

#endif
