/*Faz uma cópia do vetor origem no vetor destino. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char lu[100], lulu[100];
    int j, i;
    printf("Digita ai o string: ");
    scanf("%s", lu);
    for (j = 0; lu[j] != 0; j++)
    {
        lulu[j] = lu[j];
    }
    printf("Origem %s \nDestino %s", lu, lulu);

    return 0;
}
