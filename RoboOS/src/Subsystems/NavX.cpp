#include "NavX.h"
#include "../RobotMap.h"

NavX::NavX() : Subsystem("NavX") {
	MXP = RobotMap::navXNavXMXP;
}

void NavX::InitDefaultCommand() {

}

float NavX::GetFusedHeading() {
	return MXP->GetFusedHeading();
}

float NavX::GetMagneticHeading() {
	return MXP->GetCompassHeading();
}

float NavX::GetXAngle() {
	return MXP->GetPitch();
}

float NavX::GetYAngle() {
	return MXP->GetRoll();
}

float NavX::GetZAngle() {
	return MXP->GetYaw();
}

float NavX::GetXAcceleration() {
	return MXP->GetWorldLinearAccelX();
}

float NavX::GetYAcceleration() {
	return MXP->GetWorldLinearAccelY();
}

float NavX::GetZAcceleration() {
	return MXP->GetWorldLinearAccelZ();
}
