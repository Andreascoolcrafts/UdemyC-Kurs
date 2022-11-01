#include <stdio.h>

enum
{
    DIVIDER = 3,
};

int main()
{

    int eingabe;
    int modulu;

    printf("Gebe eine ganze Zahl ein. ");
    scanf("%d", &eingabe);
    modulu = eingabe % DIVIDER;

    if (modulu == 0)
    {
        printf("%d ist durch %d teilbar, da der Rest 0 beträgt.\n", eingabe, DIVIDER);
    }
    else
    {
        printf("%d ist nicht durch %d teilbar, denn der Rest ist %d.\n", eingabe, DIVIDER, modulu);
    }

    return 0;
}
