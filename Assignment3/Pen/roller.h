#ifndef ROLLER_H
#define ROLLER_H
#include <iostream>
#include <string>
class RollerBallPen : public Pen{

 public:

 RollerBallPen(std::string RollerBallPen::pen_name)

 : Pen(pen_name) {}
 
 virtual std::string drawLine();

 virtual std::string drawCircle();

};

#endif