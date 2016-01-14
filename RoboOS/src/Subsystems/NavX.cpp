//----------SUBSYSTEM LIBRARIES----------//
#include "NavX.h"
#include "../RobotMap.h"
#include "AHRS.h"
//----------SUBSYSTEM HARDWARE DECLARATION----------//
AHRS* NavXModule = 0;
//----------SUBSYSTEM CONSTRUCTOR----------//
NavX::NavX() : Subsystem("NavX") {
	NavXModule = new NavX();
}
//----------SUBSYSTEM DEFAULT COMMAND----------//
void NavX::InitDefaultCommand() {

}
//----------SUBSYSTEM FUNCTIONS----------//
float NavX::XAcceleration(){
	return NavXModule->GetWorldLinearAccelX();
}
float NavX::YAcceleration(){
	return NavXModule->GetWorldLinearAccelY();
}
float NavX::ZAcceleration(){
	return NavXModule->GetWorldLinearAccelZ();
}
float NavX::XAngle(){
	return NavXModule->GetPitch();
}
float NavX::YAngle(){
	return NavXModule->GetRoll();
}
float NavX::ZAngle(){
	return NavXModule->GetYaw();
}
float NavX::MagneticHeading(){
	return NavXModule->GetCompassHeading();
}
float NavX::FusedHeading(){
	return NavXModule->GetFusedHeading();
}
