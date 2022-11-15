/*Faça um programa para calcular o valor de S, dado por:
S= 1/1 + 3/2 + 5/3 + 7/4 + … + 99/50
Resposta: 95.50
*/

#include <stdio.h>

int main()
{
    float contador, s = 0, n = 1, d = 1;
    for (contador = 1; contador <= 50; contador++)
    {
        s = s + (n / d);
        n = n + 2;
        d++;
    }
    printf("%.2f\n", s);
}
