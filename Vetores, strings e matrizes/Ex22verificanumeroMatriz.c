/*Verifica se há um número N em uma matriz com valores aleatórios gerados.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int m[5][5];
    int l, c, aux = 0, existe, n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            m[l][c] = rand() % 20;
            printf("%i ", m[l][c]);
        }
        printf("\n");
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            aux = m[l][c];
            if (aux == n)
            {
                existe = 1;
            }
        }
    }
    if (existe == 1)
    {
        printf("Tem na matriz hein!!");
    }
    else
    {
        printf("Não tem na matriz hein!!");
    }

    return 0;
}
