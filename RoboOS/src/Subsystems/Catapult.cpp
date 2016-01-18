#include "WPILib.h"
#include "Catapult.h"
#include "../RobotMap.h"

Catapult::Catapult() : Subsystem("Catapult") {
    catapultSolenoid = RobotMap::catapultCatapultSolenoid;
}

void Catapult::InitDefaultCommand() {

}

void Catapult::SetKnownState(){
	catapultSolenoid->Set(DoubleSolenoid::kReverse);
}

void Catapult::Shoot(){
	int CountHolder = 0;
	catapultSolenoid->Set(DoubleSolenoid::kForward);
	while(CountHolder < 5){}
	catapultSolenoid->Set(DoubleSolenoid::kReverse);
}
