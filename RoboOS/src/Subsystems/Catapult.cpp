#include "Catapult.h"
#include "../RobotMap.h"

Catapult::Catapult() : Subsystem("Catapult") {
    catapultSolenoid1 = RobotMap::catapultCatapultSolenoid1;
    catapultSolenoid2 = RobotMap::catapultCatapultSolenoid2;
    catapultBallDetector = RobotMap::catapultCatapultBallDetector;
}

void Catapult::InitDefaultCommand() {

}

void Catapult::SetForward() {
	catapultSolenoid1->Set(DoubleSolenoid::kForward);
	catapultSolenoid1->Set(DoubleSolenoid::kForward);
}

void Catapult::SetReverse() {
	catapultSolenoid1->Set(DoubleSolenoid::kReverse);
	catapultSolenoid1->Set(DoubleSolenoid::kReverse);
}

bool Catapult::BallDetected() {
	return catapultBallDetector->GetVoltage() > 1;
}
