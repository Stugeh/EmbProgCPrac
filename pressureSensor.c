#include <stdio.h>
#include <inttypes.h>
#include <math.h>

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb);

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb)
{
    uint32_t pressure = 0;
    uint32_t mask = msb << 16;
    pressure = pressure | mask;
    mask = lsb << 8;
    pressure = pressure | mask;
    mask = xlsb & 0b11110000;
    pressure = pressure | xlsb;
    pressure = pressure >> 4;
    return pressure;
}

// void main()
// {
//     uint8_t xlsb = 0b11011110;
//     uint8_t lsb = 0b10111100;
//     uint8_t msb = 0b00011000;
//     float result = ilmanpaine(xlsb, lsb, msb);
//     printf("result %f\n", result);
// }