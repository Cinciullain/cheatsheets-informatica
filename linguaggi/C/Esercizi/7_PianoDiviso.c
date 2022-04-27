/*
 * Numero di parti in cui viene diviso il piano da delle rette.
 */

#include <stdio.h>

int parti(int n);

int main()
{
    int input;
    printf("Inserisci numero rette: \n");
    while(scanf("%d", &input) != 1 || input <= 0)
    {
        printf("Inserisci un numero, intero positivo\n");
        scanf("%*[^\n]%*c");
    }

    printf("%d rette dividono il piano in %d parti.", input, parti(input));
    return 0;
}

int parti(int n){
    if(n == 1)
    {
        return 2;
    }
    else
    {
        return parti(n - 1) + n;
    }
}
