#ifndef testDrive_H
#define testDrive_H

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include "CANTalon.h"
//why doesn't it find this include statement?

class testDrive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* leftMotor;
	TalonSRX* rightMotor;
	Encoder* leftEncoder;
	Encoder* rightEncoder;
	int ticksToDistance;
	double mult;

public:
	testDrive();
	~testDrive();
	void InitDefaultCommand();
	void resetEncoders();
	void getDistance();
	void setSpeedLeft(double speed);
	void setSpeedRight(double speed);
};

#endif  // testDrive_H
