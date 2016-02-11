#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"
#include "Commands/Autonamus.h"
#include "Commands/DriveController.h"
#include "Commands/Interupt.h"
#include "Commands/Shoot.h"
#include "Commands/ShootController.h"
#include "Commands/TurnAngle.h"

OI::OI() {
	beenPressed = false;
    xbox1.reset(new Joystick(0));
    selectButton.reset(new JoystickButton(xbox1.get(), 7));
    selectButton->WhenPressed(new Interupt());
    aButton.reset(new JoystickButton(xbox1.get(), 1));
    aButton->WhenPressed(new TurnAngle(180));
    bButton.reset(new JoystickButton(xbox1.get(), 2));
    bButton->WhenPressed(new TurnAngle(90));
    yButton.reset(new JoystickButton(xbox1.get(), 4));
    yButton->WhenPressed(new TurnAngle(-90));
    xButton.reset(new JoystickButton(xbox1.get(), 3));
    xButton->WhenPressed(new TurnAngle(0));
}

std::shared_ptr<Joystick> OI::getXbox1() {
   return xbox1;
}
