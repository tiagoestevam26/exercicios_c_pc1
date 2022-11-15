/*Faça um algoritmo que simule uma calculadora com as quarto operações básicas (+,-,*,/). O
algoritmo deve solicitar ao usuário a entrada de dois operandos e da operação a ser executada, na
forma de menu. Dependendo da opção escolhida, deve ser executada a operação solicitada e escrito
seu resultado. Utilize uma variável do tipo caractere para armazenar a operação e utilize o comando
caso para escolher a operação a partir do operador*/

#include <stdio.h>

int main()
{
    int x, y, resultado;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%i", &x);
    printf("Digite o segundo numero: ");
    scanf("%i", &y);
    printf("Digite a operação desetaja (+,-,*,/): ");
    getchar();
    scanf("%c", &op);
    if (op == '+')
    {
        resultado = x + y;
        printf("O resultado e: %i", resultado);
    }
    else if (op == '-')
    {
        resultado = x - y;
        printf("O resultado e: %i", resultado);
    }
    else if (op == '*')
    {
        resultado = x * y;
        printf("O resultado e: %i", resultado);
    }
    else if (op == '/')
    {
        resultado = x / y;
        printf("O resultado e: %i", resultado);
    }
    else
    {
        printf("A operação desejada é inválida!");
    }
}
