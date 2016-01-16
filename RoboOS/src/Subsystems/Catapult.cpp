#include "Catapult.h"
#include <DoubleSolenoid.h>
#include "../RobotMap.h"
#include <AnalogInput.h>
#include <Timer.h>

DoubleSolenoid *CatapultSolenoid = 0;
AnalogInput *CatapultCheckBall = 0;

Catapult::Catapult() : Subsystem("Catapult"){
	CatapultSolenoid = new DoubleSolenoid();
	CatapultCheckBall = new AnalogInput();
}

void Catapult::Shoot(){
	//This function will shoot the ball, after it is shot return to starting position
	DoubleSolenoid->Set(Forward);
	Timer->Start();
	bool HasPassed = Timer->HasPeriodPassed (.5);
	if (HasPassed==true){
	DoubleSolenoid->Set(Reverse);
	Timer->Reset();
	}
}

bool Catapult::Checkball(){
	//Get an input for sharps
	//If the value is in a defined range, then return true
	//Otherwise return false
	bool BallStatus(false);
	float BallStatus = AnalogInput->GetValue();
	float DefinedRange(300);
	if (BallStatus <= DefinedRange){
		BallStatus(true);
		return BallStatus;
	}
	else {
		BallStatus(false);
		return BallStatus;
	}


}

Catapult::~Catapult(){
}

