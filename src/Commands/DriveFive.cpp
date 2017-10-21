#include "DriveFive.h"

DriveFive::DriveFive() : currentDistance(), currentPower() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	drivePID = NULL;
	Requires(drive);
}

DriveFive::DriveFive() : currentDistance(), currentPower() {
	delete drivePID;
}

// Called just before this Command runs the first time
void DriveFive::Initialize() {
	drive->resetEncoders();
	drivePID = new WVPIDController(0.15, 0.0, 0.0, 5.0, false);
}

// Called repeatedly when this Command is scheduled to run
void DriveFive::Execute() {
	currentDistance = drive->getDistance();
	currentPower = drivePID->Tick(currentDistance);
	drive->setSpeedLeft(currentPower);
	drive->setSpeedRight(currentPower);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveFive::IsFinished() {
	if(drivePID->GetError() < abs(0.005))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Called once after isFinished returns true
void DriveFive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveFive::Interrupted() {

}
