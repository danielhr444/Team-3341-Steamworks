#include "DriveFive.h"

DriveFive::DriveFive(): drivePID(nullptr), currentDistance(0), currentPower(0){
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);
}

// Called just before this Command runs the first time
void DriveFive::Initialize() {
	drive->resetEncoders();
	drivePID = new WVPIDController(1, 0, 0, 5, false);
}

// Called repeatedly when this Command is scheduled to run
void DriveFive::Execute() {
	currentDistance = drive->getDistance();
	currentPower = currentDistance;
	drive->tankDrive(currentPower, currentPower);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveFive::IsFinished() {
	return (5 - currentDistance) < abs(0.005);
}

// Called once after isFinished returns true
void DriveFive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveFive::Interrupted() {

}
