#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    struct lconv *c_locale = localeconv();

    setlocale(LC_ALL, "");

    struct lconv *native_locale = localeconv();

    if(memcmp(native_locale, c_locale, sizeof(struct lconv)) == 0)
    {
        printf("They are the same\n");
    }
    else
    {
        printf("They are not the same\n");
    }
    


    return 0;
}