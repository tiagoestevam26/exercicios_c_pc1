/*Escreva um programa que elimina numeros repetidos de um vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrar(int v[])
{
    int i;
    for (i = 0; i < 15; i++)
    {
        printf("%i ", v[i]);
    }
}

int repetidos(int v[])
{
    int i, j;
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (v[i] == v[j] && i != j)
            {
                v[j] = rand() % 21;
                i = -1;
                break;
            }
        }
    }
    mostrar(v);
}

int main()
{
    int v[15], i, j, aux;
    srand(time(0));
    for (i = 0; i < 15; i++)
    {
        v[i] = rand() % 21;
        printf("%i ", v[i]);
    }
    printf("\n");
    repetidos(v);
}
