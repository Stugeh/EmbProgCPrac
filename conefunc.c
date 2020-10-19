#include <math.h>
#include <stdio.h>

double kartion_tilavuus(double radius, double height);

double kartion_tilavuus(double radius, double height)
{
    double pi = 4.0 * atan(1.0);
    double volume = (pi * radius * radius * height) / 3;
    return volume;
}