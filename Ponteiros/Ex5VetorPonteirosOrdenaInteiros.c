/* Considere um vetor de N números inteiros que não possui elementos repetidos e que contém apenas números positivos. Exemplo:

10   12   5    2    8    23   3    7    18   9
0x00 0x04 0x08 0x0C 0x10 0x14 0x18 0x1C 0x20 0x24

Os números abaixo de cada elemento do vetor correspondem aos endereços de memória de cada elemento.
Implemente um programa que gera um vetor de ponteiros para os elementos do vetor de número
inteiros. Sendo que o primeiro elemento do vetor de ponteiros deve conter o endereço do maior número
do vetor de inteiros, o segundo elemento deve conter o endereço do segundo maior número do vetor de
inteiros e assim por diante. Para o vetor de inteiros mostrado acima, o vetor de ponteiros conteria os seguintes elementos.

0x14 0x20 0x04 0x00 0x24 0x10 0x1c 0x08 0x18 0x0c

Após gerar o vetor de ponteiros. Exiba os elementos do vetor de números inteiros, em ordem decrescente,
utilizando o vetor de ponteiros (ou seja, percorra o vetor de ponteiros para exibir os números na ordem
decrescente). Observe que a primeira posição do vetor de ponteiros (0x14) aponta para o maior elemento
do vetor de inteiros, a segunda posição (0x20) aponta para o segundo maior e assim por diante. A ordem
dos números no vetor de inteiros não deve ser modificada. Outros vetores não podem ser criados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calc(int v[], int *p[], int n)
{

    int i, j, maior = 0, ima = 0;

    for (i = 0; i < n; i++)
    {
        if (maior <= v[i])
        {
            maior = v[i];
            ima = i;
        }
    }
    p[0] = &v[ima];
    printf("\n%i ta no endereco %p", *p[0], p[0]);
    maior = 0;
    ima = 0;

    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (maior <= v[i] && v[i] < *p[j - 1])
            {
                maior = v[i];
                ima = i;
            }
        }
        p[j] = &v[ima];
        maior = 0;
        ima = 0;
        printf("\n%i ta no endereco %p", *p[j], p[j]);
    }
}

int main()
{

    int n, i, j;
    printf("Digite N: ");
    scanf("%i", &n);
    int v[n], *p[n];
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        v[i] = rand() % 21;
    }
    // elimina repetidos
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (v[i] == v[j] && i != j)
            {
                v[j] = rand() % 21;
                i = -1;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }
    calc(v, p, n);
}