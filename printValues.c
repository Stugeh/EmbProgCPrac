#include <stdio.h>
#include <string.h>


void kirjoita_sensorit(char *str, float ax, float ay, float az, float press, float temp);

void kirjoita_sensorit(char *str, float ax, float ay, float az, float press, float temp){
    sprintf(str,"%+.2f,%+.2f,%+.2f,%.0f,%.2f", ax, ay, az, press, temp);
}

//int main(){
//    char str[31];
//    kirjoita_sensorit(str, 0.2536, -5.3272, -1.3277776, 101325.273261, 27.721667);
//    return -1;
//}
