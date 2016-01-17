#ifndef Drive_H
#define Drive_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Drive: public Subsystem
{
private:
	CANTalon *RightMotor1;
	CANTalon *RightMotor2;
	CANTalon *RightMotor3;
	CANTalon *LeftMotor1;
	CANTalon *LeftMotor2;
	CANTalon *LeftMotor3;
public:
	Drive();
	void InitDefaultCommand();
	void InitMotors();
	void SetRightValue(float Value);
	void SetLeftValue(float Value);
	void SetDistance();
	void SetSpeed();
	void SetPercent();
	void SetP(double Value);
	void SetI(double Value);
	void SetD(double Value);
};

#endif
