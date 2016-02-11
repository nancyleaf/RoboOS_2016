#ifndef PICKUPARM_H
#define PICKUPARM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class PickupArm: public Subsystem {
private:
	int currentMode;
	std::shared_ptr<DoubleSolenoid> flipperSolenoid;
	std::shared_ptr<CANTalon> retractorMotor1;
	std::shared_ptr<CANTalon> retractorMotor2;
	std::shared_ptr<CANTalon> pickupMotor;
	std::shared_ptr<AnalogInput> pickupArmBallDetector;
public:
	PickupArm();
	void InitDefaultCommand();
	void MaintainPickupArm();
	void SetCurrentMode(int Mode);
	int GetCurrentMode();
	bool BallDetected();
	void SetFlippers(bool Extended);
	int GetArmAngle();
};
#endif
