#include "WPILib.h"
#include "AHRS.h"
#include "NavX.h"
#include "../RobotMap.h"

AHRS *NavXMXP = 0;

NavX::NavX() : Subsystem("NavX") {
    NavXMXP = new AHRS(SPI::Port::kMXP);
}

void NavX::InitDefaultCommand() {

}

float NavX::GetFusedHeading(){
	return NavXMXP->GetFusedHeading();
}

float NavX::GetMagneticHeading(){
	return NavXMXP->GetCompassHeading();
}

float NavX::GetXAngle(){
	return NavXMXP->GetPitch();
}

float NavX::GetYAngle(){
	return NavXMXP->GetRoll();
}

float NavX::GetZAngle(){
	return NavXMXP->GetYaw();
}

float NavX::GetXAcceleration(){
	return NavXMXP->GetWorldLinearAccelX();
}

float NavX::GetYAcceleration(){
	return NavXMXP->GetWorldLinearAccelY();
}

float NavX::GetZAcceleration(){
	return NavXMXP->GetWorldLinearAccelZ();
}
