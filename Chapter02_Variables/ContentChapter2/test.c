#include <stdio.h>

int main()
{
    float zahl1;
    float zahl2;
    float summe;
    float minusErgebnis;
    float produkt;
    float quotient;

    printf("Bitte gebe jetzt die erste Zahl ein. ");
    scanf("%f", &zahl1);
    printf("\nBitte gebe nun die zweite Zahl ein. ");
    scanf("%f", &zahl2);

    summe = zahl1 + zahl2;
    minusErgebnis = zahl1 - zahl2;
    produkt = zahl1 * zahl2;
    quotient = zahl1 / zahl2;

    printf("Die Summe ist: %f.\n", summe);
    printf("Das Ergebniss der Subtraktion ist: %f.\n", minusErgebnis);
    printf("Das Produkt ist: %f.\n", produkt);
    printf("Der Quotient ist %f.\n", quotient);
}
