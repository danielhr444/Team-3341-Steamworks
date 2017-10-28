#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;
// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

const double PIDCON_INCHES = 0.13617; //inches
const double CLICKS_TO_METERS = 0.0008842593;
const double MIN_DIST_ERROR_CV = 0.2;
const double MIN_ANGLE_ERROR_CV = 0.5;
const double ENCODER_RIGHT_1 = 0;
const double ENCODER_RIGHT_2 = 1;
const double ENCODER_LEFT_1 = 2;
const double ENCODER_LEFT_2 = 3;

//Talon IDS: Winch 1, Shooter 2, Intake 3
const int WINCH_PDP_PORT = 0;
const int WINCH_CAN_ID = 4;
const int MOTORPORT = 0;

const double SHOOTER = 2; //change to 1 for RoboRIO #1  //shooter 2
const double SHOOTER_ANGLE = 33; //set this to the constant angle
const double TARGET_HEIGHT = 7; //whatever the height is

const double ACQUIRER = 0; //change to 1 for RoboRIO #1  //shooter 2
#endif
