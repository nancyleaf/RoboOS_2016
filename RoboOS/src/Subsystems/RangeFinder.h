#ifndef RANGEFINDER_H
#define RANGEFINDER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class RangeFinder: public Subsystem {
private:
	std::shared_ptr<AnalogInput> sharpSensor1;
	std::shared_ptr<AnalogInput> sharpSensor2;
	std::shared_ptr<AnalogInput> sharpSensor3;
public:
	RangeFinder();
	void InitDefaultCommand();
	int GetDistance();
};
#endif
