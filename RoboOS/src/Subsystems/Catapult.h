#ifndef CATAPULT_H
#define CATAPULT_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Catapult: public Subsystem {
private:
	std::shared_ptr<DoubleSolenoid> catapultSolenoid1;
	std::shared_ptr<DoubleSolenoid> catapultSolenoid2;
	std::shared_ptr<AnalogInput> catapultBallDetector;
public:
	Catapult();
	void InitDefaultCommand();
	void SetForward();
	void SetReverse();
	bool BallDetected();
};

#endif
