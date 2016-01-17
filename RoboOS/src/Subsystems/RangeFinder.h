#ifndef RangeFinder_H
#define RangeFinder_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class RangeFinder: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	RangeFinder();
	void InitDefaultCommand();
	double GetDistance();
};

#endif
