#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct lconv *locale;

    printf("%s\n", argv[1]);
    if(argc != 2)
    {
        printf("usage: %s [LOCALE]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if(setlocale(LC_ALL, argv[1]) == NULL)
    {
        printf("Not a valid locale\n");
        exit(EXIT_FAILURE);
    }
    

    //return 0;
    locale = localeconv();

    printf("decimal_point = \"%s\"\n", locale->decimal_point);
    printf("thousands_sep = \"%s\"\n", locale->thousands_sep);
    printf("grouping = %d\n", locale->grouping[0]);
    printf("mon_decimal_point = \"%s\"\n", locale->mon_decimal_point);
    printf("mon_thousands_sep = \"%s\"\n", locale->mon_thousands_sep);
    printf("mon_grouping = %d\n", locale->mon_grouping[0]);
    printf("positive_sign = \"%s\"\n", locale->positive_sign);
    printf("negative_sign = \"%s\"\n", locale->negative_sign);
    printf("currency_symbol = \"%s\"\n", locale->currency_symbol);
    printf("frac_digits = %d\n", locale->frac_digits);
    printf("p_cs_precedes = %d\n", locale->p_cs_precedes);
    printf("n_cs_precedes = %d\n", locale->n_cs_precedes);
    printf("p_sep_by_space = %d\n", locale->p_sep_by_space);
    printf("n_sep_by_space = %d\n", locale->n_sep_by_space);
    printf("p_sign_posn = %d\n", locale->p_sign_posn);
    printf("n_sign_posn = %d\n", locale->n_sign_posn);
    printf("int_curr_symbol = \"%s\"\n", locale->int_curr_symbol);
    printf("int_frac_digits = %d\n", locale->int_frac_digits);

    return 0;
}