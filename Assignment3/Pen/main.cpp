#include <iostream>

#include <string>

 //!TODO: remove the ’virtual’ keyword from the methods, compile,

 // run and take note of the results.

 

 

 class RollerBallPen : public Pen{

 public:

 RollerBallPen(std::string pen_name)

 : Pen(pen_name) {}

 RollerBallPen() : Pen(std::string("RollerBallPen")){}

 virtual std::string drawLine() {

 return getName().append(" draws a line.");

 }

 virtual std::string drawCircle(){

 return getName().append(" draws a circle.");

 }

 };

 using namespace std;

 void WriteWithPen(Pen &pen){

 cout << pen.drawLine() << endl;

 cout << pen.drawCircle() << endl;

 }

 int main(){

 FountainPen fp;

 WriteWithPen(fp);

 RollerBallPen rbp("A Pen that Uses a Roller Ball");

 WriteWithPen(rbp);

 Pen pen;

 WriteWithPen(pen);

 }