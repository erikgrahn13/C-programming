#include <stdio.h>
#include <stddef.h>

struct s{
    char a;
    int b[2];
    float c;
};

int main(void)
{
    struct s myStruct;

    printf("SizeOf a: %d\n", sizeof(myStruct.a));
    printf("SizeOf b: %d\n", sizeof(myStruct.b));
    printf("SizeOf c: %d\n", sizeof(myStruct.c));
    printf("SizeOf myStruct: %d\n", sizeof(myStruct));

    printf("OffsetOf a: %d\n", offsetof(struct s, a));
    printf("OffsetOf b: %d\n", offsetof(struct s, b));
    printf("OffsetOf c: %d\n", offsetof(struct s, c));

/* Tehe uput of the code is below
    SizeOf a: 1
    SizeOf b: 8
    SizeOf c: 4
    SizeOf myStruct: 16
    OffsetOf a: 0
    OffsetOf b: 4
    OffsetOf c: 12

    Based on the output we can conclude that the compiler creates "holes" in the structure
*/
    return 0;
}