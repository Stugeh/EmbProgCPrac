#include <string.h>
#include <inttypes.h>

uint8_t palindromi(char *s, uint8_t length);


uint8_t palindromi(char *s, uint8_t length){
    int n = 0;
    for(n=0;n < length / 2; n++){
        if(s[n] != s[ strlen(s) - 1 - n ]) { return n+1; }
    }
    return 0;
}

//int main(){
//    printf("%d", palindromi("huhhhuh",6));
//    return -1;
//}