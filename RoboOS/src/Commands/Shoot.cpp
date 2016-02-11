#include "Shoot.h"

Shoot::Shoot(): Command() {
	Requires(Robot::drivetrain.get());
	Requires(Robot::visionTargeting.get());
    Requires(Robot::pickupArm.get());
    Requires(Robot::catapult.get());
    ShotFinished = false;
    LaunchFinished = true;
}

void Shoot::Initialize() {
	RobotMap::globalTimer->Reset();
	Robot::pickupArm->SetCurrentMode(5);
}

void Shoot::Execute() {
	if(Robot::visionTargeting->GetAngleToGoal() > 5){
		Robot::drivetrain->SetDriveValues(1, -1);
	}else if(Robot::visionTargeting->GetAngleToGoal() < -5){
		Robot::drivetrain->SetDriveValues(-1, 1);
	}else{
		if((Robot::pickupArm->GetArmAngle() > 234) & LaunchFinished){
			Robot::catapult->SetForward();
			RobotMap::globalTimer->Start();
			LaunchFinished = false;
		}
		if(RobotMap::globalTimer->HasPeriodPassed(2)){
			Robot::catapult->SetReverse();
			ShotFinished = true;
		}
	}
}

bool Shoot::IsFinished() {
    return ShotFinished;
}

void Shoot::End() {
	RobotMap::globalTimer->Stop();
	RobotMap::globalTimer->Reset();
}

void Shoot::Interrupted() {
	RobotMap::globalTimer->Stop();
	RobotMap::globalTimer->Reset();
}
