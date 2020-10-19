#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float valoisuus(uint16_t rekisteri);

float valoisuus(uint16_t rekisteri)
{
    float exponent = rekisteri >> 12;
    uint16_t mask = 0b0000111111111111;
    float multiplier = rekisteri & mask;
    float lux = 0.01 * pow(2, exponent) * multiplier;
    return lux;
}

// void main()
// {
//     uint16_t test = 0b0110110000110101;
//     float lux = valoisuus(test);
//     printf("lux %f\n", lux);
// }