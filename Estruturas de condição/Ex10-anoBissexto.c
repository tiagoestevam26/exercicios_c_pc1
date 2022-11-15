/*Faça um programa capaz de identificar se um número é um ano bissexto. Considere que para o ano
ser bissexto basta que seja divisível por 400. Caso contrário, precisa ser divisível por 4 e não ser
divisível por 100. Faça uma condição composta que englobe todas as regras para a definição do ano
bissexto.*/

#include <stdio.h>

int main()
{
    int x;
    printf("Digite o ano: ");
    scanf("%i", &x);

    if (x % 400 == 0)
    {
        printf("O ano é bissexto!");
    }
    else if ((x % 4 == 0) && (x % 100 != 0))
    {
        printf("O ano é bissexto!");
    }
    else
    {
        printf("O ano não é bissexto!");
    }
    return 0;
}
