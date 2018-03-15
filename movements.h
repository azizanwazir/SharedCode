#include <time.h>

#include "simulator.h"
#include "simpletools.h"
#include "abdrive.h"
#include "ping.h"
#include <math.h>
#ifdef BUILDING_IN_SIMULATOR
  #include "simulator.h"
#endif

void zeroRadiusTurn(int angle);
int degrees(float angle);
int mm(float distance);
void aboutTurn();
void leftTurn();
void rightTurn();

void leftTurn()
{
  zeroRadiusTurn(-91);
  //drive_goto(9, 9);
}

void rightTurn()
{
  zeroRadiusTurn(91);
  //drive_goto(9, 9);
}

void aboutTurn()
{
  /**rotates the robot around its centre (with adjustment)*/
  zeroRadiusTurn(180);
  //drive_goto(9, 9);
}

void zeroRadiusTurn(int angle)
{
  /**rotates the robot around the centre of the axis of its wheels*/
  drive_goto(degrees(angle*1.017), degrees(-angle));
}

int degrees(float angle)
{
  /** converts an angle to ticks*/
  float preciseDistance = (2*3.1415*52.9*angle)/360;
  int ticks = mm(preciseDistance);

  return ticks;
}

int mm(float distance)
{
  /** converts mm to ticks*/
  float preciseTicks = distance/3.25;
  int ticks = (int)preciseTicks;

  return ticks;
}
