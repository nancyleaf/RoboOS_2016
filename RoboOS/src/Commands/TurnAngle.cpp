#include "TurnAngle.h"

TurnAngle::TurnAngle(double Angle): Command() {
    m_Angle = Angle;
	Requires(Robot::drivetrain.get());
	Requires(Robot::navX.get());
}

void TurnAngle::Initialize() {

}

void TurnAngle::Execute() {
	Robot::drivetrain->SetDriveValues(0.25,-0.25);
}

bool TurnAngle::IsFinished() {
	if((Robot::navX->GetZAngle() > m_Angle - 2) & (Robot::navX->GetZAngle() < m_Angle + 2)){//changed from 10
		return true;
	}
	return false;
}

void TurnAngle::End() {

}

void TurnAngle::Interrupted() {

}
