#ifndef VisionTargeting_H
#define VisionTargeting_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class VisionTargeting: public Subsystem{
private:
	std::shared_ptr<NetworkTable> Camera;
public:
	VisionTargeting();
	void InitDefaultCommand();
	double GetAngleToGoal();
	double GetDistanceToGoal();
};
#endif
