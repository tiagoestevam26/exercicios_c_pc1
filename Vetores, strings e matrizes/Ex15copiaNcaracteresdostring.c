/*  Copia os primeiros n caracteres do vetor origem para o vetor destino. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char lu[100], lulu[100];
    int j, n;
    printf("Digita ai o lu: ");
    scanf("%s", lu);
    printf("Digita um numero ai: ");
    scanf("%i", &n);
    for (j = 0; j < n; j++)
    {
        lulu[j] = lu[j];
    }
    printf("Resultado: %s ", lulu);

    return 0;
}
