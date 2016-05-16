#ifndef CTRUS_H
#define CTRUS_H
#include <string>
#include <iostream>

class CitrusFruit{

 protected:

 float ph;

 public:

 CitrusFruit(float ph) : ph(ph){}


  const char * getName();

 float getPh();
};
 
#endif