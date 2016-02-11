#ifndef RANGEFINDER_H
#define RANGEFINDER_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class RangeFinder: public Subsystem {
private:
	std::shared_ptr<Ultrasonic> rangeFinderUltrasonic;
public:
	RangeFinder();
	void InitDefaultCommand();
	void MaintainRangeFinder();
	double GetDistance();
};
#endif
