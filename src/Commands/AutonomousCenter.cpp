#include <Commands/AutonomousCenter.h>
#include "Drive.h"
#include "Turn.h"
#include "Delay.h"
#include "GetCV.h"
#include "TimeMove.h"
#include "GetRobotModelData.h"
#include "../CommandBase.h"

AutonomousCenter::AutonomousCenter() {
	AddSequential(new Drive(45.445 + 24.5 , 0.4)); //old value that was too less movement: 45.445
//	AddSequential(new Delay(2)); // Delay for 2 seconds
//	AddSequential(new GetCV(&distance, &azimuth)); // Get CV Values
//	AddSequential(new Turn(&azimuth));
//	AddSequential(new Drive(distance - 8, 0.2)); // Drive the rest of the distance to the target, and convert CV meters to inches
}

