#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Drivetrain: public Subsystem {
private:
	std::shared_ptr<CANTalon> rightMotor1;
	std::shared_ptr<CANTalon> rightMotor2;
	std::shared_ptr<CANTalon> rightMotor3;
	std::shared_ptr<CANTalon> leftMotor1;
	std::shared_ptr<CANTalon> leftMotor2;
	std::shared_ptr<CANTalon> leftMotor3;
public:
	Drivetrain();
	void InitDefaultCommand();
	void SetKnownState();
	void SetDriveValues(float Left, float Right);
	void SetSpeedMode();
	void SetPositionMode();
	void SetVoltageMode();
	void SetPercentMode();
	void SetCurrentMode();
	void SetVoltageRamp();
};
#endif
