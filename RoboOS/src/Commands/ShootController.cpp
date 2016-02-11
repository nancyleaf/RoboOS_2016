#include "ShootController.h"
#include "Commands/Shoot.h"

ShootController::ShootController(): Command() {
	beenPressed = false;
	Requires(Robot::catapult.get());
	Requires(Robot::pickupArm.get());
}

void ShootController::Initialize() {

}

void ShootController::Execute() {
	if(Robot::pickupArm->GetCurrentMode() == 3){
		if(Robot::pickupArm->BallDetected()){
			Robot::pickupArm->SetCurrentMode(4);
		}
	}
	if(Robot::pickupArm->GetCurrentMode() == 4){
		if(Robot::catapult->BallDetected()){
			Robot::pickupArm->SetCurrentMode(1);
		}
	}
	if(Robot::catapult->BallDetected()){
		Robot::pickupArm->SetFlippers(false);
	}else{
		Robot::pickupArm->SetFlippers(true);
	}
	if(Robot::oi->getXbox1()->GetRawAxis(3) > .5){
			Scheduler::GetInstance()->AddCommand(new Shoot);
	}
	if((Robot::oi->getXbox1()->GetRawAxis(2) > .5) & !beenPressed){
		if(Robot::pickupArm->GetCurrentMode() == 3){
			Robot::pickupArm->SetCurrentMode(5);
		}else if(Robot::pickupArm->GetCurrentMode() == 5){
			Robot::pickupArm->SetCurrentMode(3);
		}
		beenPressed = true;
	}
	if(Robot::oi->getXbox1()->GetRawAxis(2) < .5){
		beenPressed = false;
	}
	if(Robot::oi->getXbox1()->GetRawButton(8)){
		Robot::pickupArm->SetCurrentMode(2);
	}
}

bool ShootController::IsFinished() {
    return false;
}

void ShootController::End() {

}

void ShootController::Interrupted() {

}
