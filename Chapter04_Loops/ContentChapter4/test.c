#include <stdio.h>

int main()
{
    int i = 1;

    int a;

    while(1)
    {
        // printf(" Hallo!\n");

        i = i * i++;

        // i++;

        // a = i % 8;

        printf("%d\n", i);
    }

    return 0;
}


/*


1! = 1.
2! = 2 · 1 = 2.
3! = 3 · 2 · 1 = 6.
4! = 4 · 3 · 2 · 1 = 24.
5! = 5 · 4 · 3 · 2 · 1 = 120.
6! = 6 · 5 · 4 · 3 · 2 · 1 = 720.


*/