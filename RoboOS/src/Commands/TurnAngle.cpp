#include "TurnAngle.h"

TurnAngle::TurnAngle(double Angle): Command() {
    m_Angle = Angle;
	Requires(Robot::drivetrain.get());
	Requires(Robot::navX.get());
}

void TurnAngle::Initialize() {

}

void TurnAngle::Execute() {
	double current_angle=Robot::navX->GetZAngle();
	switch(m_angle){
		case -180:
		if(current_angle>=0){ 
			bool clockwise=true;
		}
		if(current_angle>-180&&current_angle<0){
			bool clockwise=false;
		}

		break;
		case -90:
		if(current_angle>-90&&current_angle<=90){
			bool clockwise=false;
		}
		if(current_angle<=-90||current_angle>90){
			bool clockwise=true;
		}
		
		break;
		case 0:
		if(current_angle>0){
			bool clockwise=false;
		}
		if(current_angle<0){
			bool clockwise=true;
		}
		
		
		case 90:
	
	
		if(current_angle<-90||x>=90){
			bool clockwise=false;
		}
		if(current_angle>-90&&current_angle<90){
			bool clockwise=true;
			
		}
		
		break;
		
		
		
	}
/*	double current_angle=Robot::navX->GetZAngle();
	if(current_angle<0){
		current_angle+=360;

	}
	
	if((m_angle-current_angle)>(current_angle-m_angle)){
		Robot::drivetrain->SetDriveValues(0.25,-0.25);//this could be reversed guess	
	}
	else{
		Robot::drivextrain->SetDriveValues(-0.25,0.25);	
	}
	*/
	
	if(clockwise==true){Robot::drivextrain->SetDriveValues(0.25,-0.25);//clockwise}
if(clockwise==false){Robot::drivextrain->SetDriveValues(-0.25,0.25);}
}

bool TurnAngle::IsFinished() {
	if((Robot::navX->GetZAngle() > m_Angle - 2) && (Robot::navX->GetZAngle() < m_Angle + 2)){//changed from 10
		return true;
	}
	return false;
}

void TurnAngle::End() {

}

void TurnAngle::Interrupted() {

}
