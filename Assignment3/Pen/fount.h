#ifndef FOUNT_H
#define FOUNT_H

#include <string>
#include "pen.h"
#include <iostream>
class FountainPen : public Pen {

 public:

 /////////////////////////////////////////////////////////////

 // //!TODO: what would happen if you used this version of //

 // // Constructor in the comment box below //

 // /////////////////////////////////////////////////////// //

 // // FountainPen(std::string pen_name = "FountainPen") // //

 // // : Pen(pen_name) {} // //


 // /////////////////////////////////////////////////////// //

 /////////////////////////////////////////////////////////////

 
 FountainPen(std::string FountainPen::pen_name)

 : Pen(pen_name) {}
 virtual std::string drawLine();

 virtual std::string drawCircle();

 };

#endif 