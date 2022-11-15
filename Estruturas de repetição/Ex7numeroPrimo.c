/* Faça um programa que leia um número inteiro positivo e determine se este é primo ou não. Por
definição, um número é primo quando é divisível somente por si próprio e por 1. */

#include <stdio.h>

int main()
{
    int contador, x, primo = 0;
    printf("Digite o numero: ");
    scanf("%i", &x);
    for (contador = 1; contador <= x; contador++)
    {
        if (x % contador == 0)
        {
            primo = primo + 1;
        }
    }

    if (primo > 2)
    {
        printf("O numero nao e primo!");
    }
    else
    {
        printf("O numero e primo!");
    }
}
