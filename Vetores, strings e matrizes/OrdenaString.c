/*Escreva um programa que organiza uma string em ordem alfabética.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenaString(char s[])
{
    int aux, cont = 0, i, j;
    for (i = 0; s[i] != 0; i++)
    {
        cont++;
    }
    for (i = 0; i < cont; i++)
    {
        for (j = cont - 1; j > 0; j--)
        {
            if (s[j] < s[j - 1])
            {
                aux = s[j];
                s[j] = s[j - 1];
                s[j - 1] = aux;
            }
        }
    }
    printf("\n%s", s);
}

int main()
{
    char s[100];
    printf("Digite a string: ");
    gets(s);
    ordenaString(s);
}
