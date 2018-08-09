#include "TestCircle.h"

TestCircle::TestCircle()
{
    //ctor
    raduis = 1;
}

TestCircle::TestCircle(double newRadius)
{
    raduis = newRadius;
}

TestCircle::~TestCircle()
{
    //dtor
}

double TestCircle::getArea()
{
    return raduis * raduis* 3.14;
}
