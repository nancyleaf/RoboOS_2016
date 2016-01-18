#include "TogglePickup.h"

bool FinishedPickup;

TogglePickup::TogglePickup(): Command() {
	Requires(Robot::ballPickup.get());
	FinishedPickup = false;
}

void TogglePickup::Initialize() {
	if(Robot::ballPickup->IsActive()){
		Robot::ballPickup->ActivePickup(false);
	}else{
		Robot::ballPickup->ActivePickup(true);
	}
	FinishedPickup = true;
}

void TogglePickup::Execute() {

}

bool TogglePickup::IsFinished() {
    return FinishedPickup;
}

void TogglePickup::End() {

}

void TogglePickup::Interrupted() {

}
