#include <inttypes.h>
#include <string.h>

void merkkilaskuri(char *str, uint8_t *tulos);

void merkkilaskuri(char *str, uint8_t *tulos){
    char vowels[] = {'a','e','i','o','u'};
    int i;
    for (i = 0; str[i] != '\0'; ++i) {
        char character =str[i];
        if(character >= 'A' && character <= 'Z'){
            character = character+32;
        }
        if(character >= 'a' && character <= 'z'){
            if(strchr(vowels,character)){
                tulos[0]++;
            }
            else{
                tulos[1]++;
            }
        }
    }
}