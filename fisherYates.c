#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

void shuffle(uint8_t *list, uint16_t list_size);

void shuffle(uint8_t *list, uint16_t list_size)
{
    int i;
    for (i = 0; i < list_size; i++)
    {
        int index = rand() % (list_size - i) + i;
        uint8_t value = list[index];
        uint16_t n;
        for (n = index; n > i; n--)
        {
            list[n] = list[n - 1];
        }
        list[i] = value;
    }
}

// void main()
// {
//     uint8_t list[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     srand(time(NULL));
//     shuffle(list, 8);
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d ", list[i]);
//     }
// }