/* “void calc(int * v, int num, int * xmin, int * xmax)” que coloca nas posições de
memórias apontadas por “xmin” e “xmax” o menor e o maior valor (respectivamente)
existentes nos “num” primeiros inteiros do vetor “v”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calc(int *v, int num, int *xmin, int *xmax)
{
    int maior = 0, menor = 30, i;

    for (i = 0; i < num; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }

    for (i = 0; i < num; i++)
    {
        if (v[i] == maior)
        {
            xmax = &v[i];
            break;
        }
    }

    for (i = 0; i < num; i++)
    {
        if (v[i] == menor)
        {
            xmin = &v[i];
            break;
        }
    }

    printf("\nO endereco de %i (xmin) eh %p \nO endereco de %i (xmax) e %p\n\n", *xmin, xmin, *xmax, xmax);
}

int main()
{
    int v[100], *xmin, *xmax, num, i = 0, j;
    srand(time(0));
    while (i == 0)
    {
        printf("Digite a quantidade de numeros desejados: ");
        scanf("%i", &num);
        if (num <= 100)
        {
            i++;
        }
        else
        {
            printf("Numero invalido, tente novamente!\n");
        }
    }
    for (j = 0; j < 100; j++)
    {
        v[j] = rand() % 31;
        printf("%i ", v[j]);
    }

    calc(v, num, xmin, xmax);
    // p = strstr(s, s2);
    // printf("\nO primeiro endereco da string1 eh %p\n\nA letra %c ta no endereco %p da string1!\n\n", pr, *p, p);
}