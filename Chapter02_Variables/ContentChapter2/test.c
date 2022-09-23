#include <stdio.h>

int main()
{
    // Variablen deklarieren
    float zahl1;
    float zahl2;
    float summe;
    float minusErgebnis;
    float produkt;
    float quotient;
    
    // Eingabe der ersten Zahl
    printf("Bitte gebe jetzt die erste Zahl ein. ");
    // Überprüfen der oberen Einhabe
    int check1 = scanf("%f", &zahl1);
    
    // Eingabe der zweiten Zahl
    printf("\nBitte gebe nun die zweite Zahl ein. ");
    // Überprüfen der oberen Eingabe
    int check2 = scanf("%f", &zahl2);

    // Zahlen zusammen rechnen
    summe = zahl1 + zahl2;
    minusErgebnis = zahl1 - zahl2;
    produkt = zahl1 * zahl2;
    quotient = zahl1 / zahl2;

    // Erste Eingabe anzeigen
    printf("\nErste Eingabe: %f.\n", zahl1);
    // Gültigkeit der ersten Eingabe anzeigen
    printf("Gültigkeit der Einhabe: %i.\n ", check1);

    // Zweite Eingabe anzeigen
    printf("\nZweite Eingabe: %f.\n", zahl2);
    // Gültigkeit der zweiten Eingabe anzeigen
    printf("Gültigkeit der Eingabe: %i.\n ", check2);

    // Ergebnisse anzeigen
    printf("\nDie Summe ist: %f.\n", summe);
    printf("Das Ergebniss der Subtraktion ist: %f.\n", minusErgebnis);
    printf("Das Produkt ist: %f.\n", produkt);
    printf("Der Quotient ist %f.\n", quotient);
}
