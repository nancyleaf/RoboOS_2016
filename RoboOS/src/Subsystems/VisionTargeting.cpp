#include "VisionTargeting.h"
#include "../RobotMap.h"

VisionTargeting::VisionTargeting() : Subsystem("ExampleSubsystem"){
	Camera = RobotMap::visonProcessingCameraData;
}

void VisionTargeting::InitDefaultCommand(){

}

double VisionTargeting::GetAngleToGoal(){
	return Camera->GetNumber("xvalue", 0);
}

double VisionTargeting::GetDistanceToGoal(){
	return Camera->GetNumber("yvalue", 0);
}
