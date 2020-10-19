#include <stdio.h>
#include <inttypes.h>

float lampotila(uint16_t rekisteri, float kerroin);

float lampotila(uint16_t rekisteri, float kerroin)
{
    rekisteri = rekisteri >> 2;
    float temp = kerroin * rekisteri;
    return temp;
}

// void main()
// {
//     float temp_multi = 0.03125;
//     uint16_t test_temp = 0b1011001000000000;
//     float temp = lampotila(test_temp, temp_multi);
// }