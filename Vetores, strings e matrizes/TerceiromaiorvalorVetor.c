/*Escreva um programa que imprime o ultimo nome de um nome completo dado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sobrenome(char s[])
{
    int cont1 = 0, cont2 = 0, i;
    for (i = 0; s[i] != 0; i++)
    {
        cont1++;
    }
    for (i = cont1 - 1; s[i] != ' '; i--)
    {
        cont2++;
    }
    printf("%s\n", &s[cont1 - cont2]);
}

int main()
{
    char s[100];
    printf("Digite o nome completo: ");
    gets(s);
    sobrenome(s);
}
