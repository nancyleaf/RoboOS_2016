#include "NavX.h"
#include "../RobotMap.h"

AHRS NavX* = AHRS();

NavX::NavX() : Subsystem("NavX") {
}

    
void NavX::InitDefaultCommand() {

}

float NavX::XAcceleration(){
	return NavX->GetWorldLinearAccelX();
}
float NavX::YAcceleration(){
	return NavX->GetWorldLinearAccelY();
}
float NavX::ZAcceleration(){
	return NavX->GetWorldLinearAccelZ();
}
float NavX::XAngle(){
	return NavX->GetPitch();
}
float NavX::YAngle(){
	return NavX->GetRoll();
}
float NavX::ZAngle(){
	return NavX->GetYaw();
}
float NavX::MagneticHeading(){
	return NavX->GetCompassHeading();
}
float NavX::FusedHeading(){
	return NavX->GetFusedHeading();
}
