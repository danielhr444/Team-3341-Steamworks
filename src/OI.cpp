#include <WPILib.h>
#include "Commands/SetDriveReverse.h"
#include "Commands/SetDriveForward.h"
#include "Commands/WinchMove.h"
#include <Commands/WinchPositionControlPID.h>
#include <Commands/SetShooterSpeedPID.h>
#include <Commands/ShooterOff.h>
#include <Commands/CloseGate.h>
#include <Commands/OpenGate.h>
#include <Commands/AcquirerOn.h>
#include "OI.h"

#define DANIEL

using namespace frc;

OI::OI() :
		driveStickLeft(new Joystick(2)), driveStickRight(new Joystick(1)), operatorStick(
				new Joystick(0)) {
	reversed = true;
	acquirerButtons();
	shooterButtons();
	driveButtons();
	winchButtons();

	// 	: THis doesn't work :'(
	// TODO: FInd good place for these buttons
	//Button* stopWinchPositionPIDButton = new JoystickButton(driveStickRight, 4);
	//shooterButton = new JoystickButton(driveStickRight, 5);
	//shooterButton->WhenPressed(new SetShooterSpeed());
	//new JoystickButton(operatorStick, 1);
	//Button* driveReverse = new JoystickButton(driveStickLeft, 4);
	//driveReverse->WhenPressed(new SetDriveReverse());
	//driveReverse->WhenReleased(new SetDriveForward());

	//Button* togRev = new JoystickButton(driveStickRight, 1);
	//togRev->WhenPressed(new ToggleReverse());
}


void OI::acquirerButtons(){
	Button* acquirerEnable = new JoystickButton(operatorStick,15); //enable acquirer
	acquirerEnable->WhenPressed(new AcquirerOn(true));

	Button* acquirerOff = new JoystickButton(operatorStick,12); //disable acquirer
	acquirerOff->WhenPressed(new AcquirerOn(false));
}

void OI::driveButtons() {
	Button* toggleDriveDirection = new JoystickButton(driveStickRight, 3);
	toggleDriveDirection->WhenReleased(new SetDriveReverse()); //drive reverse for winch
}
void OI::winchButtons() {
#ifdef DANIEL
	Button* positionControl = new JoystickButton(operatorStick, 1); //winch position control
	positionControl->WhenPressed(new PositionControl());
	positionControl->WhenReleased(new WinchMove());
#endif
#ifdef ISHA
	Button* positionControl = new JoystickButton(operatorStick, 11); //winch position control
	positionControl->WhenPressed(new PositionControl());
	Button* posCon2 = new JoystickButton(operatorStick, 2);
	posCon2->WhenPressed(new WinchMove()); //move winch
#endif
}

void OI::shooterButtons() {
	Button* shootButt = new JoystickButton(operatorStick, 7); // Shooter On
	shootButt->WhenPressed(new SetShooterSpeed());

	Button* shootOff = new JoystickButton(operatorStick, 8); //Shooter Off
	shootOff->WhenPressed(new ShooterOff());

	Button* servoMotor = new JoystickButton(operatorStick, 5); // Open Release Door
	servoMotor->WhenPressed(new OpenGate());

	Button* servoOff = new JoystickButton(operatorStick, 6); //Close Release Door
	servoOff->WhenPressed(new CloseGate());
}

Joystick* OI::getDriveStickLeft() {
	if(reversed)
		return driveStickLeft;
	else
		return driveStickRight;
}

Joystick* OI::getDriveStickRight() {
	if(reversed)
		return driveStickRight;
	else
		return driveStickLeft;
}

Joystick* OI::getOperatorStick() {
	return operatorStick;
}

/*Button* OI::getWinchPositionPIDButton()
 {
 return stopWinchPIDButton;
 }*/
/*
 Button* OI::shooterButtonValue()
 {
 return shooterButton;
 }
 */
/*Button* OI::disableShooterButton()
 {
 return disableShooterButton;
 }
 */

/*Button* OI::activatePositionControl()
 {
 return positionControl;
 }*/

OI::~OI() {
	delete driveStickLeft;
	delete driveStickRight;
	delete operatorStick;
	//delete stopWinchPIDButton;
}
