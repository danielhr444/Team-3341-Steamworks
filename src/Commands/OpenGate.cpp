#include "OpenGate.h"

OpenGate::OpenGate() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(shooter);
	//shooter->setServo(65);
	finished = false;
}

// Called just before this Command runs the first time
void OpenGate::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void OpenGate::Execute() {
	shooter->setServo(170);
	finished = true;
}

// Make this return true when this Command no longer needs to run execute()
bool OpenGate::IsFinished() {
	return finished;
}

// Called once after isFinished returns true
void OpenGate::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void OpenGate::Interrupted() {

}
