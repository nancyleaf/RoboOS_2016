#include "ManualShoot.h"

bool FinishedShoot;

ManualShoot::ManualShoot(): Command(){
	FinishedShoot = false;
	Requires(Robot::catapult.get());
}

void ManualShoot::Initialize() {
	Robot::catapult->Shoot();
	FinishedShoot = true;
}

void ManualShoot::Execute() {

}

bool ManualShoot::IsFinished() {
    return FinishedShoot;
}

void ManualShoot::End() {

}

void ManualShoot::Interrupted() {

}
