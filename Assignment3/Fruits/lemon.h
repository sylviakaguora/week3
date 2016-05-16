#ifndef LEMON_H
#define LEMON_H
#include <string>
#include "ctrus.h"
#include <iostream>

class Lemon : public CitrusFruit {

 public:

 Lemon(float ph) : CitrusFruit(ph){}

 const char * getName();

 float getPh();

 };
#endif