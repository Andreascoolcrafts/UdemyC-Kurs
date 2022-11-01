#include <stdio.h>

enum
{
    COLA = 5,
    LIMONADE,
    EISTEE,
    WASSER = 1,
    CAPRI_SONNE
};

int main()
{

    int eingabe;

    printf("Gebe bitte ein, welches Getränk du haben möchtest. ");

    scanf("%d", &eingabe);

    switch (eingabe)
    {
    case COLA:
        printf("Du hast Cola ausgesucht");
        break;

    case LIMONADE:
        printf("Du hast Limonade ausgesucht");
        break;

    case EISTEE:
        printf("Du hast Eistee ausgesucht");
        break;

    case WASSER:
        printf("Du hast Wasser ausgesucht");
        break;

    case CAPRI_SONNE:
        printf("Du hast Capri Sonne ausgesucht");
        break;

    default:
        printf("Sorry, aber deine Eingabe war ungültig");
        break;
    }

}