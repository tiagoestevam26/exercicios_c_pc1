/* Implemente as seguintes funções:
• Função criar_vetor que solicita ao usuário um valor n (tamanho do vetor) e cria
dinamicamente um vetor de n elementos.
• Função exibir_vetor que recebe um ponteiro para um vetor e imprime os n elementos
desse vetor.
• Função liberar_vetor que recebe um ponteiro para um vetor e libera esta área de memória.
As funções deverão ser chamadas pelo programa principal na seguinte ordem: criar_vetor,
exibir_vetor e liberar_vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void liberar_vetor(int *p)
{
    free(p);
}

void exibir_vetor(int p[])
{
    int i;
    for (i = 1; i <= p[0]; i++)
    {
        printf("%i ", p[i]);
    }
}

int* criar_vetor(int *p)
{
    int i, n;
    printf("Digite o valor de n: ");
    scanf("%i", &n);
    p = (int *)malloc(n * sizeof(int));
    p[0] = n;
    for (i = 1; i <= n; i++)
    {
        p[i] = rand() % 31;
    }
    return p;
}

int main()
{
    int *p;
    srand(time(0));
    p = criar_vetor(p);
    exibir_vetor(p);
    liberar_vetor(p);
}