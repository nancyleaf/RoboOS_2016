#ifndef BALLPICKUP_H
#define BALLPICKUP_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallPickup: public Subsystem {
private:
	bool IsActiveVar;
	std::shared_ptr<CANTalon> retractorMotor;
	std::shared_ptr<CANTalon> pickupMotor;
public:
	BallPickup();
	void InitDefaultCommand();
	void SetKnownState();
	void ActivePickup(bool Active);
	bool IsActive();
};
#endif
