#include <vectormath.h>


NavVector::NavVector(float theta,double mag,bool israd)
{
  if(israd == false) // if we are indegrees
  {
    // convert to radians
    theta = theta * PI/180;
  }

  this->x = mag * cos(theta);
  this->y = mag * sin(theta);
}

NavVector::NavVector(float x,float y)
{
  this-> x = x;
  this-> y = y;
}

NavVector::NavVector(NavVector& other)
{
  // basicly just copy over the new values
  this->x = other.getX();
  this->y = other.getY();
}

NavVector::NavVector()
{
  x=1.0;
  y=1.0;
}

String NavVector::sayHi()
{
  return "hello vectors this had better be working by 5";
}

float NavVector::getX()
{
  return this-> x;
}

float NavVector::getY()
{
  return this-> y;
}

void NavVector::setX(float x)
{
  this->x = x;
}

void NavVector::setY(float y)
{
  this->y = y;
}

void NavVector::setValues(float x,float y)
{
  this->x = x;
  this->y = y;
}

NavVector NavVector::add(NavVector& other)
{
  float new_x = this->x + other.getX();
  float new_y = this->y + other.getY();
  return NavVector(new_x,new_y);
}

NavVector NavVector::sub(NavVector& other)
{
  float new_x = this->x - other.getX();
  float new_y = this->y - other.getY();
  return NavVector(new_x,new_y);
}

float NavVector::getLength()
{
  double pathag=(this->x * this->x) + (this->y * this->y);
  return sqrt(pathag);
}

float NavVector::getAngle()
{
  double x = (double) this ->x;
  double y = (double) this ->y;
  double tan_theta= y/x;
  double theta = atan(tan_theta)*180/PI;
  return (float)theta;
}
