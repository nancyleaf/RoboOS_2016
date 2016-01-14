//----------SUBSYSTEM LIBRARIES----------//
#ifndef NAVX_H
#define NAVX_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "AHRS.h"
//----------SUBSYSTEM PRIVATE OBJECTS----------//
class NavX: public Subsystem {
private:
	AHRS* NavXModule;
//----------SUBSYSTEM PUBLIC OBJECTS----------//
public:
	NavX();
	void InitDefaultCommand();
	float XAcceleration();
	float YAcceleration();
	float ZAcceleration();
	float XAngle();
	float YAngle();
	float ZAngle();
	float MagneticHeading();
	float FusedHeading();
};
#endif
