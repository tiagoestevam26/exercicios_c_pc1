/* Faça um programa que: i) solicite ao usuário um valor n; ii) crie, dinamicamente, um vetor de n
elementos; e iii) passe esse vetor para uma função que preencherá o vetor. Depois, no
programa principal, o vetor preenchido deverá ser impresso. Antes de finalizar o programa,
libere a área de memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int p[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        p[i] = rand() % 31;
    }
}

int main()
{
    int i, n, *p;
    srand(time(0));
    printf("Digite o valor de n: ");
    scanf("%i", &n);
    p = (int *)malloc(n * sizeof(int));
    preenche(p, n);
    for (i = 0; i < n; i++)
    {
        printf("%i ", p[i]);
    }
    free(p);
}