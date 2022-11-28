/* Implemente um programa que preenche aleatoriamente dois vetores Q e R com 12 e 20
elementos inteiros (valores repetidos ou não) respectivamente. Implemente um procedimento que
recebe os vetores Q, R e um terceiro vetor W. O procedimento deverá preencher o vetor W com a
interseção de Q e R. Além disto, W não poderá conter elementos repetidos. Exiba o conteúdo do
vetor W no programa principal. Utilize a função malloc para os vetores Q e R. Utilize a função
realloc toda vez que um elemento for inserido no vetor W. Não utilize variáveis globais.
*/
/*IMCOMPLETO*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criar_vetor(int *p, int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        p[i] = rand() % 31;
        printf("%i ", p[i]);
    }
    return p;
}

int *intersecao(int *q, int *r, int *w)
{
    int i, j, k, cont = 0, l = 2;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (q[i] == r[j])
            {
                w = realloc(w, (cont + 2) * sizeof(int));
                w[cont] = q[i];
                cont++;
                break;
            }
        }
    }
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < cont; i++)
        {
            w[i] = w[i + 1];
        }
    }
    for (i = 0; i < cont - 2; i++)
    {
        printf("%i ", w[i]);
    }
    printf("\n");
    for (i = 0; i < cont - 2; i++)
    {
        for (j = 0; j < cont - 2; j++)
        {
            if (w[i] == w[j] && i != j)
            {
                w[i] = 40;
                i = -1;
                break;
            }
        }
    }
    printf("\n");
    for (i = 0; i < cont; i++)
    {
        if (w[i] == 40)
        {
            l++;
            for (j = i; j < cont; j++)
            {
                w[j] = w[j + 1];
            }
        }
    }
    for (i = 0; i < cont - l; i++)
    {
        printf("%i ", w[i]);
    }
    return w;
}

int main()
{
    srand(time(0));
    int *q, *r, *w;
    q = (int *)malloc(12 * sizeof(int));
    r = (int *)malloc(20 * sizeof(int));
    w = (int *)malloc(1 * sizeof(int));
    q = criar_vetor(q, 12);
    printf("\n");
    r = criar_vetor(r, 20);
    printf("\n");
    w = intersecao(q, r, w);
}