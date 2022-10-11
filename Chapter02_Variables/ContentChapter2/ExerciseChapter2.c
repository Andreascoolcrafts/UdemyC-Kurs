#include <stdio.h>

int main()
{
    int age;
    printf("Bitte gib dein aktuelles Alter ein: ");
    scanf("%d", &age);
    printf("Du bist %d Jahre alt.\n", age);
    int ageInYears = age * 365;
    printf("Du lebst seit %d Jahren.\n", ageInYears);
    int ageInDays = ageInYears * 24;
    printf("Du lebst seit %d Tagen.\n", ageInDays);
    int ageInHours = ageInDays * 60;
    printf("Du lebst seit %d Stunden.\n", ageInHours);
    int ageInMinuts = ageInHours * 60;
    printf("Du lebst seit %d Minuten.\n", ageInMinuts);
    return 0;
}
