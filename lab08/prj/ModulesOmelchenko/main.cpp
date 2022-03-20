#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdio>

float s_calculation(float x, float y,float z)
{
    return 0.5 * ( pow (x,2)) - sqrt(abs(((pow((y+z),2)) - (pow(x,5)) ))) - log(abs(sin(z)));
}
