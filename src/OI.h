#ifndef OI_H
#define OI_H

#include "RobotMap.h"
#include "WPILib.h"

class OI {
private:
	Joystick* driveStickLeft;
	Joystick* driveStickRight;
	Joystick* operatorStick;


	//Button* stopWinchPIDButton;
	//Button* positionControl;
	//Button* shooterButton;

	void driveButtons();
	void winchButtons();
	void shooterButtons();
	void acquirerButtons();

public:
	OI();
	~OI();

	bool reversed;
	Joystick* getDriveStickLeft();
	Joystick* getDriveStickRight();
	Joystick* getOperatorStick();
};

#endif
