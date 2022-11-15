/*Faça um programa usando o comando “for” para calcular o seguinte somatório:
n
 (5*i+2)
i=3
em que “n” é definido pelo usuário
*/

#include <stdio.h>

int main()
{
    int i, n, soma = 0;
    printf("Digite o valor de n:");
    scanf("%i", &n);
    for (i = 3; i <= n; i++)
    {
        soma = soma + ((5 * i) + 2);
    }
    printf("%i", soma);
}
