#include <stdio.h>

int main()
{
    int psAudi = 230;
    int psMercedes = 330.578;

    if( psAudi == psMercedes)
    {
        printf("Der Audi hat genau soviel PS wie der Mecedes-Benz.\n");
    }
    else if( psAudi < psMercedes)
    {
        printf(" Der Audi hat weniger PS als der Mercedes-Benz.\n");
    }
    else
    {
        printf("Der Audi hat mehr PS als der Mercedes-Benz.\n");
    }
    printf("Der Audi hat %d PS und der Mercedes-Benz hat %d PS.", psAudi, psMercedes);
}