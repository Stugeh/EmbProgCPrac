#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float keskiarvo(char *lista);

float keskiarvo(char *lista){
    char str[strlen(lista)];
    const char sep[] = ",";
    char *token;
    float average, sum = 0;
    int n=0;

    strcpy(str, lista);
    token = strtok(str, sep);

    while(token){
        sum = sum + atof(token);
        token = strtok(NULL, sep);
        n++;
    }
    average = sum/ n;
    //printf("avg: %f\nn: %d\nsum: %f\n",average,n,sum);
    return average;
}

//int main(){
//    printf("%f",keskiarvo("55,5,31,-80,38,-111,118,-32,-62,23,41,-97,-2"));
//    return -1;
//}
