#include <iostream>
#include "pen.h"
using namespace std;

 void WriteWithPen(Pen &pen){

 cout << pen.drawLine() << endl;

 cout << pen.drawCircle() << endl;

 }
 
 std::string getName(){

 return pen_name;

 }
std::string Pen::drawLine(){

 return getName().append(" draws a line.");

 }

std::string Pen::drawCircle(){

 return getName().append(" draws a circle.");

 }
