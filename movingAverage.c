#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

void movavg(float *array, uint8_t array_size, uint8_t window_size);

void movavg(float *array, uint8_t array_size, uint8_t window_size){
    int i;
    float averageArray[array_size];
    for (i = 0; i < (array_size - (window_size - 1)); i++){
        float total = 0;
        int j;
        for (j = 0; j < window_size; j++)
        {
            total = total + array[i + j];
        }
        float average = total / window_size;
        averageArray[i] = average;
    }
    for (i = 0; i < (array_size - (window_size - 1)); i++) {
        if(i!=0){
            printf(",");
        }
        printf("%.2f", averageArray[i]);
    }
}

//int main(){
//    float data[5] = {1.0, 2.0, 4.0, 6.0, 9.0};
//    movavg(data, 5, 3);
//    return -1;
//}