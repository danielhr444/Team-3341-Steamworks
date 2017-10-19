#include "TestDrive.h"
#include "../RobotMap.h"
#include "WPILib.h"

TestDrive::TestDrive() : Subsystem("TestDrive"), leftMotor(new CanTalonSRX(0)), rightMotor(new CanTalonSRX(1)), leftEncoder(new Encoder(0,1)), rightEncoder(new Encoder(2,3)){

}

void TestDrive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
