/*Implemente um programa para ordenar 3 números inteiros.*/

#include <stdio.h>

int main()
{
    int x, y, z, n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%i", &x);
    printf("Digite o segundo numero: ");
    scanf("%i", &y);
    printf("Digite o terceiro numero: ");
    scanf("%i", &z);
    if (x == y || x == z || y == z)
    {
        if (x == y && x > z)
        {
            n3 = x;
            n2 = y;
            n1 = z;
        }
        if (x == z && x > y)
        {
            n3 = x;
            n2 = z;
            n1 = y;
        }
        if (y == z && y > x)
        {
            n3 = y;
            n2 = z;
            n1 = x;
        }
        if (x == y && x < z)
        {
            n3 = z;
            n2 = y;
            n1 = x;
        }
        if (x == z && x < y)
        {
            n3 = y;
            n2 = z;
            n1 = x;
        }
        if (y == z && y < x)
        {
            n3 = x;
            n2 = z;
            n1 = y;
        }
        if (y == z && y == x)
        {
            n3 = x;
            n2 = z;
            n1 = y;
        }
    }
    else
    {
        if (x > y && x > z)
        {
            n3 = x;
            if (y > z)
            {
                n2 = y;
                n1 = z;
            }
            else
            {
                n2 = z;
                n1 = y;
            }
        }
        else if (y > x && y > z)
        {
            n3 = y;
            if (x > z)
            {
                n2 = x;
                n1 = z;
            }
            else
            {
                n2 = z;
                n1 = x;
            }
        }
        else if (z > x && z > y)
        {
            n3 = z;
            if (y > x)
            {
                n2 = y;
                n1 = x;
            }
            else
            {
                n2 = x;
                n1 = y;
            }
        }
    }

    printf("A ordem dos nC:meros e: %i %i %i\n", n1, n2, n3);
    return 0;
}
