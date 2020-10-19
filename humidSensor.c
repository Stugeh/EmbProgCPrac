#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float kosteus(uint16_t rekisteri);

float kosteus(uint16_t rekisteri)
{
    float rel_humid = (rekisteri / pow(2, 16)) * 100;
    return rel_humid;
}

// void main()
// {
//     uint16_t test = 0b1000000000000000;
//     float hum = kosteus(test);
// }