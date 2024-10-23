#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    // double liczba1 = 9.1301;
    // char liczba2 = 'a';
    // int liczba3 = 9;
    // int liczba4;
    // printf("%g\n", liczba1);
    // printf("%c\n", liczba2);
    // printf("%d\n", liczba3);
    // printf("Wpisz liczbe: ");
    // scanf("%d", &liczba4); 
    // printf("%d\n", liczba4);
    int n =30;
    int tablica[n];
    double suma =0;
    srand(time(NULL));
    for (size_t i = 0; i < n; i++)
    {
        tablica[i] = (rand()%(n*3)) + (n*2);
        suma +=tablica[i];
    }
    double srednia = suma/n;
    printf("%.2f\n", srednia);
    return 0;
}