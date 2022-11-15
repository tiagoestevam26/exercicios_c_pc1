/*Dado o valor de E, calcular S=1 + 1/2 + 1/4 +1/6 + … até que um termo da série seja menor do que
E. O valor de E deverá ser digitado pelo usuário.
Resposta. Para E=0.00001 S=6.698*/

#include <stdio.h>

int main()
{
    float e, s = 1, serie = 1, deno = 0;
    printf("Digite o numero: ");
    scanf("%f", &e);
    while (serie / deno >= e)
    {
        deno = deno + 2;
        s = s + serie / deno;
    }
    printf("O resultado e %.3f! ", s);
}
