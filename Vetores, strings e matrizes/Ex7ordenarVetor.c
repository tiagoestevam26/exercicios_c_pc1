/*Escreva um programa que armazena 15 números inteiros aleatórios em um vetor.  O vetor
deverá ser uma variável local dentro da função “main”. Colocar em ordem crescente os elementos do vetor. No programa principal, exiba o vetor
antes e depois de ordená­lo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[15], i, j, aux;
    srand(time(0));
    printf("\nValores antes de ordená-los:\n");
    for (i = 0; i < 15; i++)
    {
        v[i] = rand() % 15;
        printf("%i ", v[i]);
    }
    printf("\n");

    for (i = 0; i < 15; i++)
    {
        for (j = 14; j > i; j--)
        {
            while (v[j] < v[j - 1])
            {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }

    printf("Valores depois de ordená-los:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%i ", v[i]);
    }

    return 0;
}
