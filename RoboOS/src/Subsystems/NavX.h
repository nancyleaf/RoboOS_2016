#ifndef NAVX_H
#define NAVX_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "AHRS.h"

class NavX: public Subsystem {
private:
	std::shared_ptr<AHRS> MXP;
public:
	NavX();
	void InitDefaultCommand();
	float GetFusedHeading();
	float GetMagneticHeading();
	float GetXAngle();
	float GetYAngle();
	float GetZAngle();
	float GetXAcceleration();
	float GetYAcceleration();
	float GetZAcceleration();
};

#endif
