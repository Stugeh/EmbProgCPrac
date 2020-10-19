#include <stdio.h>
#include <inttypes.h>

int64_t laske_kertoma(int8_t n);

int64_t laske_kertoma(int8_t n)
{
    int64_t result = 1;

    if (n > 20)
    {
        return -1;
    }
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        result = i * result;
    }
    return result;
}

// void main()
// {
//     printf("%lld", laske_kertoma(5));
// }