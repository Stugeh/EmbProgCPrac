#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

struct mpudata_t {
    float data[6];
};

void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold);

void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold){
    if(mpu.data[index] > threshold){
        int i;
        for(i = 0; i < 6; i++){
            if(i>0){
                printf(",");
            }
            printf("%.2f",mpu.data[i]);
        }
        printf("\n");
    }
}

//int main(){
//    struct mpudata_t values = { { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 } };
//    tarkistus(values, 5, 3.21);
//    return -1;
//}