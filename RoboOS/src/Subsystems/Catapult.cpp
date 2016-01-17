#include "Catapult.h"
#include "../RobotMap.h"
#include "WPILib.h"

DoubleSolenoid *CatapultSolenoid = 0;
AnalogInput *CatapultCheckBall = 0;
Timer *ShotCounter = 0;

Catapult::Catapult() : Subsystem("Catapult"){
	CatapultSolenoid = new DoubleSolenoid(CatapultSolenoidModule);
	CatapultCheckBall = new AnalogInput(CapapultBallChecker);
	ShotCounter = new Timer();
}

void Catapult::InitDefaultCommand(){

}

void Catapult::Shoot(){
	//This function will shoot the ball, after it is shot return to starting position
	CatapultSolenoid->Set(DoubleSolenoid::kForward);
	ShotCounter->Start();
	while(ShotCounter->HasPeriodPassed(1) == false){
	}
	CatapultSolenoid->Set(DoubleSolenoid::kReverse);
	ShotCounter->Stop();
	ShotCounter->Reset();
}

bool Catapult::Checkball(){
	if(CatapultCheckBall->GetVoltage() < 1){
		return true;
	}else{
		return false;
	}
}
