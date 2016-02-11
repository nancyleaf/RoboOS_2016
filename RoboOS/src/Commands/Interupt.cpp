#include "Interupt.h"

Interupt::Interupt(): Command() {
	Requires(Robot::drivetrain.get());
	Requires(Robot::navX.get());
	Requires(Robot::catapult.get());
	Requires(Robot::pickupArm.get());
	Requires(Robot::rangeFinder.get());
}

void Interupt::Initialize() {

}

void Interupt::Execute() {

}

bool Interupt::IsFinished() {
    return true;
}

void Interupt::End() {

}

void Interupt::Interrupted() {

}
