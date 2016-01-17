#ifndef OI_H
#define OI_H

#include "WPILib.h"

Joystick *Xbox1;
Joystick *Xbox2;

class OI {
private:
	Joystick *Xbox1;
	Joystick *Xbox2;
	JoystickButton *YButton;
	JoystickButton *XButton;
	JoystickButton *RightBumper;
	JoystickButton *LeftBumper;
public:
	OI();
	float GetStickYAxis(int Controller);
	float GetStickXAxis(int Controller);





};

#endif
