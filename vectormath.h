#ifndef VECTOR_H
#define VECTOR_H
#include <Arduino.h>

class NavVector
{
public:
  NavVector();
  NavVector(float,float);
  NavVector(float,double,bool); // setup a vector from polar notation
  String sayHi();
  // print out x and y
  float getX();
  float getY();
  // set x and y
  void setX(float);
  void setY(float);
  void setValues(float,float);
  NavVector add(NavVector& other);
  NavVector sub(NavVector& other);
  bool equal(NavVector& other);
  float getLength();
  float getAngle();

private:
  float x;
  float y;
};

#endif
