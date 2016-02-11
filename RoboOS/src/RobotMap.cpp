#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

std::shared_ptr<CANTalon> RobotMap::drivetrainRightFront;
std::shared_ptr<CANTalon> RobotMap::drivetrainRightMiddle;
std::shared_ptr<CANTalon> RobotMap::drivetrainRightBack;
std::shared_ptr<CANTalon> RobotMap::drivetrainLeftFront;
std::shared_ptr<CANTalon> RobotMap::drivetrainLeftMiddle;
std::shared_ptr<CANTalon> RobotMap::drivetrainLeftBack;
std::shared_ptr<DoubleSolenoid> RobotMap::catapultCatapultSolenoid1;
std::shared_ptr<DoubleSolenoid> RobotMap::catapultCatapultSolenoid2;
std::shared_ptr<AnalogInput> RobotMap::catapultCatapultBallDetector;
std::shared_ptr<CANTalon> RobotMap::pickupArmRetractorMotor1;
std::shared_ptr<CANTalon> RobotMap::pickupArmRetractorMotor2;
std::shared_ptr<CANTalon> RobotMap::pickupArmPickupMotor;
std::shared_ptr<AnalogInput> RobotMap::pickupArmPickupArmBallDetector;
std::shared_ptr<Ultrasonic> RobotMap::rangeFinderRangeFinderUltrasonic;
std::shared_ptr<DoubleSolenoid> RobotMap::pickupArmFlipperSolenoid;
std::shared_ptr<Timer> RobotMap::globalTimer;
std::shared_ptr<AHRS> RobotMap::navXNavXMXP;
std::shared_ptr<NetworkTable> RobotMap::visonProcessingCameraData;


void RobotMap::init() {
    LiveWindow *lw = LiveWindow::GetInstance();

    drivetrainRightFront.reset(new CANTalon(10));
    lw->AddActuator("Drivetrain", "RightFront", drivetrainRightFront);
    
    drivetrainRightMiddle.reset(new CANTalon(11));
    lw->AddActuator("Drivetrain", "RightMiddle", drivetrainRightMiddle);
    
    drivetrainRightBack.reset(new CANTalon(12));
    lw->AddActuator("Drivetrain", "RightBack", drivetrainRightBack);
    
    drivetrainLeftFront.reset(new CANTalon(13));
    lw->AddActuator("Drivetrain", "LeftFront", drivetrainLeftFront);
    
    drivetrainLeftMiddle.reset(new CANTalon(14));
    lw->AddActuator("Drivetrain", "LeftMiddle", drivetrainLeftMiddle);
    
    drivetrainLeftBack.reset(new CANTalon(15));
    lw->AddActuator("Drivetrain", "LeftBack", drivetrainLeftBack);
    
    catapultCatapultSolenoid1.reset(new DoubleSolenoid(0, 0, 1));
    lw->AddActuator("Catapult", "CatapultSolenoid1", catapultCatapultSolenoid1);
    
    catapultCatapultSolenoid2.reset(new DoubleSolenoid(0, 2, 3));
    lw->AddActuator("Catapult", "CatapultSolenoid2", catapultCatapultSolenoid2);
    
    catapultCatapultBallDetector.reset(new AnalogInput(0));
    lw->AddSensor("Catapult", "CatapultBallDetector", catapultCatapultBallDetector);
    
    pickupArmRetractorMotor1.reset(new CANTalon(16));
    lw->AddActuator("PickupArm", "RetractorMotor1", pickupArmRetractorMotor1);
    
    pickupArmRetractorMotor2.reset(new CANTalon(17));
    lw->AddActuator("PickupArm", "RetractorMotor2", pickupArmRetractorMotor2);
    
    pickupArmPickupMotor.reset(new CANTalon(8));
    lw->AddActuator("PickupArm", "PickupMotor", pickupArmPickupMotor);
    
    pickupArmPickupArmBallDetector.reset(new AnalogInput(1));
    lw->AddSensor("PickupArm", "PickupArmBallDetector", pickupArmPickupArmBallDetector);
    
    rangeFinderRangeFinderUltrasonic.reset(new Ultrasonic(0, 1));
    lw->AddSensor("RangeFinder", "RangeFinderUltrasonic", rangeFinderRangeFinderUltrasonic);
    
    pickupArmFlipperSolenoid.reset(new DoubleSolenoid(0, 4 , 5));

    globalTimer.reset(new Timer());

	navXNavXMXP.reset(new AHRS(SerialPort::kMXP));

	visonProcessingCameraData = NetworkTable::GetTable("Camera");
}
