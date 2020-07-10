#include <stdio.h>

union{
    float value;

    struct{
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    }IEEE754;
}my_float;

int main(void)
{
    my_float.IEEE754.sign = 1;
    my_float.IEEE754.exponent = 128;
    my_float.IEEE754.fraction = 0;

    printf("%.1f\n", my_float.value);

    return 0;
}