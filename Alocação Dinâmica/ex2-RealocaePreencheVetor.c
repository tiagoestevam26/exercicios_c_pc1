/* No programa anterior, exiba os n elementos do vetor dentro da função que preenche o vetor.
Após exibir o vetor, pergunte ao usuário quantos elementos a mais ele deseja adicionar ao vetor. Em
seguida, use a função realloc para aumentar o tamanho do vetor. Preencha as novas posições do
vetor com números aleatórios. Exiba o vetor novamente. No programa principal, exiba todos os
elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheRealoca(int p[], int n)
{
    int i, n2;
    for (i = 0; i < n; i++)
    {
        p[i] = rand() % 31;
        printf("%i ", p[i]);
    }
    printf("\nDigite quantos elementos deseja adicionar: ");
    scanf("%i", &n2);
    realloc(p, (n + n2) * sizeof(int));
    for (i = n; i < n + n2; i++)
    {
        p[i] = rand() % 31;
    }
    for (i = 0; i < n + n2; i++)
    {
        printf("%i ", p[i]);
    }
}

int main()
{
    int i, n, *p;
    srand(time(0));
    printf("Digite o valor de n: ");
    scanf("%i", &n);
    p = (int *)malloc(n * sizeof(int));
    preencheRealoca(p, n);
    free(p);
}