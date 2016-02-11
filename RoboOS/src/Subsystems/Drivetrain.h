#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Drivetrain: public Subsystem {
private:
	std::shared_ptr<CANTalon> rightFront;
	std::shared_ptr<CANTalon> rightMiddle;
	std::shared_ptr<CANTalon> rightBack;
	std::shared_ptr<CANTalon> leftFront;
	std::shared_ptr<CANTalon> leftMiddle;
	std::shared_ptr<CANTalon> leftBack;
public:
	Drivetrain();
	void InitDefaultCommand();
	void MaintainMotors();
	void SetDriveValues(float Left, float Right);
	void SetMode(CANSpeedController::ControlMode ControlMode);
};
#endif
