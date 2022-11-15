/*Faça um programa para calcular e mostrar o valor de PI, usando a série:
PI=4- 4/3 + 4/5 – 4/7 + 4/9 -... até que um termo seja menor do que 0.0001, em valor absoluto.
*/

#include <stdio.h>

int main()
{
    int contador = 1;
    float pi = 0, n = 4, d = 1;
    while (n / d >= 0.0001)
    {
        if (contador % 2 == 1)
        {
            pi = pi + (n / d);
        }
        else
        {
            pi = pi - (n / d);
        }
        contador++;
        d = d + 2;
    }
    printf("%f\n", pi);
}
