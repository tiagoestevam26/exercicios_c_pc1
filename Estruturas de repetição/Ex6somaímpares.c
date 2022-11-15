/*
(1)Faça um programa que solicite ao usuário dois números inteiros diferentes “n1” e “n2” e calcule a
soma de todos os números ímpares dentro do intervalo definidor por [n1,...,n2]. Considere que n1 é
sempre menor do que n2.
(2)Altere o programa anterior de tal maneira que quando o usuário digitar um intervalo inválido
(n1>n2), o programa irá solicitar novos valores para n1 e n2.
*/

#include <stdio.h>

int main()
{
    int contador, n1, n2, soma = 0, l = 0;
    while (l == 0)
    {
        printf("Digite o numero1:");
        scanf("%i", &n1);
        printf("Digite o numero2:");
        scanf("%i", &n2);
        contador = n1;
        if (n1 > n2)
        {
            printf("Valor inválido. Tente de novo.\n");
        }
        else
        {
            l = 1;
            while (contador <= n2)
            {
                if (contador % 2 != 0)
                {
                    soma = soma + contador;
                    contador = contador + 1;
                }
                else
                {
                    contador = contador + 1;
                }
            }
        }
    }
    printf("A soma e %i!", soma);
}
