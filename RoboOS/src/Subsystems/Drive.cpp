#include "Drive.h"
#include "../RobotMap.h"
#include "WPILib.h"

CANTalon *RightMotor1 = 0;
CANTalon *RightMotor2 = 0;
CANTalon *RightMotor3 = 0;
CANTalon *LeftMotor1 = 0;
CANTalon *LeftMotor2 = 0;
CANTalon *LeftMotor3 = 0;

Drive::Drive() : Subsystem("Drive"){
	RightMotor1 = new CANTalon(1);
	RightMotor2 = new CANTalon(1);
	RightMotor3 = new CANTalon(1);
	LeftMotor1 = new CANTalon(1);
	LeftMotor2 = new CANTalon(1);
	LeftMotor3 = new CANTalon(1);
}

void Drive::InitDefaultCommand(){

}

void Drive::InitMotors(){
	RightMotor1->SetControlMode(CANSpeedController::kFollower);
	RightMotor1->Set(1);
	RightMotor3->SetControlMode(CANSpeedController::kFollower);
	RightMotor3->Set(1);
	LeftMotor2->SetControlMode(CANSpeedController::kFollower);
	LeftMotor2->Set(1);
	LeftMotor3->SetControlMode(CANSpeedController::kFollower);
	LeftMotor3->Set(1);
}

void Drive::SetRightValue(float Value){
	RightMotor1->Set(Value);
}

void Drive::SetLeftValue(float Value){
	LeftMotor1->Set(Value);
}

void Drive::SetDistance(){
	LeftMotor1->SetControlMode(CANSpeedController::kPosition);
	RightMotor1->SetControlMode(CANSpeedController::kPosition);
}

void Drive::SetSpeed(){
	LeftMotor1->SetControlMode(CANSpeedController::kSpeed);
	RightMotor1->SetControlMode(CANSpeedController::kSpeed);
}

void Drive::SetPercent(){
	LeftMotor1->SetControlMode(CANSpeedController::kVoltage);
	RightMotor1->SetControlMode(CANSpeedController::kVoltage);
}

void Drive::SetP(double Value){
	LeftMotor1->SetP(1);
	RightMotor1->SetP(1);
}

void Drive::SetI(double Value){
	LeftMotor1->SetI(1);
	RightMotor1->SetI(1);
}

void Drive::SetD(double Value){
	LeftMotor1->SetD(1);
	RightMotor1->SetD(1);
}
