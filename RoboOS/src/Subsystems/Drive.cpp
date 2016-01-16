#include "Drive.h"
#include "../RobotMap.h"

CANTalon *RightMotor1 = 0;
CANTalon *RightMotor2 = 0;
CANTalon *RightMotor3 = 0;
CANTalon *LeftMotor1 = 0;
CANTalon *LeftMotor2 = 0;
CANTalon *LeftMotor3 = 0;

Drive::Drive() : Subsystem("Drive") {
	RightMotor1 = new CANTalon();
}

void Drive::InitMotors(){
	RightMotor2->SetMode(CANSpeedController::kFollower);
	RightMotor2->Set(x);
	RightMotor3->SetMode(CANSpeedController::kFollower);
	RightMotor3->Set(x);
	LeftMotor2->SetMode(CANSpeedController::kFollower);
	LeftMotor2->Set(x);
	LeftMotor3->SetMode(CANSpeedController::kFollower);
	LeftMotor3->Set(x);
}

void Drive::SetRightValue(float Value){
	RightMotor1->Set(Value)
}

void Drive::SetLeftValue(float Value){
	LeftMotor1->Set(Value)
}

void Drive::SetDistance(){
	LeftMotor1->SetMode(CANSpeedController::kDistance)
	RightMotor1->SetMode(CANSpeedController::kDistance)
}

void Drive::SetSpeed(){
	LeftMotor1->SetMode(CANSpeedController::kSpeed)
	RightMotor1->SetMode(CANSpeedController::kSpeed)
}

void Drive::SetPercent(){
	LeftMotor1->SetMode(CANSpeedController::kPercent)
	RightMotor1->SetMode(CANSpeedController::kPercent)
}

void Drive::SetP(double Value){
	Motor1->SetP()
}

void Drive::SetI(double Value){
	Motor1->SetI()
}

void Drive::SetD(double Value){
	Motor1->SetD()
}

void Drive::InitDefaultCommand() {
}
