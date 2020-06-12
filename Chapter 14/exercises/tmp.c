#include <stdio.h>
//#define ERROR(x, ...) (fprintf(stderr, (x), (__VA_ARGS__)))
//#define N = 10
//#define SUB(x, y) x - y
#define M2(x, y) #x #y

int main(void)
{
    int i, j, k;
    j = 1;
    k = 2;
    puts(M2(j, k));

    return 0;
}