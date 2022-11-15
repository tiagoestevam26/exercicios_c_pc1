/*Implemente uma função que recebe 2 números inteiros como parâmetro e retorna e a multiplicação
desses números. A multiplicação não deve ser feita utilizando o operador “*”, em vez disso utilize
apenas o operador de adição “+”. Implemente o programa principal para testar sua função.*/

#include <stdio.h>

int titi(int x, int y)
{
    int contador, s = 0;
    if (x < y)
    {
        for (contador = x; contador <= y; contador++)
        {
            if (contador % 2 != 0)
            {
                s = s + contador;
            }
        }
    }
    else
    {
        for (contador = y; contador <= x; contador++)
        {
            if (contador % 2 != 0)
            {
                s = s + contador;
            }
        }
    }
    return (s);
}

int main()
{
    int n1, n2, r;
    printf("Digite n1: ");
    scanf("%i", &n1);
    printf("Digite n2: ");
    scanf("%i", &n2);
    r = titi(n1, n2);
    printf("O resultado e: %i", r);
    return 0;
}
