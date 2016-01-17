#include "WPILib.h"
#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"

#include "Commands/AutonomousCommand.h"

Joystick *Xbox1 = 0;
Joystick *Xbox2 = 0;
JoystickButton *YButton = 0;
JoystickButton *XButton = 0;
JoystickButton *RightBumper = 0;
JoystickButton *LeftBumper = 0;

OI::OI() {
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	Xbox1 = new Joystick(1);
	Xbox2 = new Joystick(1);
	YButton = new JoystickButton(Xbox1,1);
	XButton = new JoystickButton(Xbox1,1);
	RightBumper = new JoystickButton(Xbox1,1);
	LeftBumper = new JoystickButton(Xbox1,1);
	YButton->WhenPressed();
	XButton->WhenPressed();
	RightBumper->WhenPressed();
	LeftBumper->WhenPressed();
}

float OI::GetStickYAxis(int Controller){
	if(Controller == 1){
		return Xbox1->GetRawAxis(1);
	}else if(Controller == 2){
		return Xbox2->GetRawAxis(1);
	}
	return 0;
}

float OI::GetStickXAxis(int Controller){
	if(Controller == 1){
		return Xbox1->GetRawAxis(1);
	}else if(Controller == 2){
		return Xbox2->GetRawAxis(1);
	}
	return 0;
}
