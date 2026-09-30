// File:          my_first_controller.cpp
// Date:
// Description:
// Author:
// Modifications:

// You may need to add webots include files such as
// <webots/DistanceSensor.hpp>, <webots/Motor.hpp>, etc.
// and/or to add some other includes
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>

const int TIME_STEP {64};
const double MAX_SPEED {6.28};

// This is the main program of your controller.
// It creates an instance of your Robot instance, launches its
// function(s) and destroys it at the end of the execution.
// Note that only one instance of Robot should be created in
// a controller program.
// The arguments of the main function can be specified by the
// "controllerArgs" field of the Robot node
int main(int argc, char **argv) {

  webots::Robot robot {};

  webots::Motor *leftMotor {robot.getMotor("left wheel motor")};
  webots::Motor *rightMotor {robot.getMotor("right wheel motor")};

//  leftMotor->setPosition(10.0);
//  rightMotor->setPosition(10.0);

  leftMotor->setPosition(INFINITY);
  rightMotor->setPosition(INFINITY);

  leftMotor->setVelocity(0.1 * MAX_SPEED);
  rightMotor->setVelocity(-0.1 * MAX_SPEED);

  while (robot.step(TIME_STEP) != -1);


  return 0;
}
