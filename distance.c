#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct piste {
    int koordinaatit[3];
    struct piste *seuraava;
};

struct polku {
    double matka;
    struct piste *pisteet;
};
void laske_kuljettu_matka(struct polku *polku);

void laske_kuljettu_matka(struct polku *polku){
    struct piste current = polku->pisteet[0];
    double total = 0;
    while(current.seuraava->koordinaatit != polku->pisteet[-1].koordinaatit){
        int i;
        double sum=0;
        for (i=0; i<3; i++){
           sum = sum + pow(current.koordinaatit[i] - current.seuraava->koordinaatit[i],2);
        }
        total = total+sqrt(sum);
        current = *current.seuraava;
        printf("here");
    }
    printf(".......");
    polku->matka=total;
}

int main(){
    struct piste a1, a2, a3;
    int coords1[3] = {1,2,3}, coords2[3]={3,4,6}, coords3[3]={4,4,4};
    memcpy(a1.koordinaatit,coords1, sizeof(a1.koordinaatit));
    memcpy(a2.koordinaatit,coords2, sizeof(a2.koordinaatit));
    memcpy(a3.koordinaatit,coords3, sizeof(a3.koordinaatit));
    a1.seuraava = &a2 ;
    a2.seuraava = &a3 ;
    a3.seuraava = NULL;
    struct piste pisteet[] = {a1, a3};
    struct polku path = {0,{pisteet}};


    laske_kuljettu_matka(&path);
    printf("%f",path.matka);

    return -1;
}