#ifndef ORANGE_H
#define ORANGE_H
#include <string>
#include <iostream>
#include "ctrus.h"


class Orange : public CitrusFruit {

 public:

 Orange(float ph) : CitrusFruit(ph){}

 const char * getName();

 float getPh();

 };

 


#endif