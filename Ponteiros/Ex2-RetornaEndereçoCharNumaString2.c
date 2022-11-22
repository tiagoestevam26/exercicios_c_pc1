/* “char * strchar (char *s, char ch)” que retorna o endereço da última ocorrência
de “ch” em “s”; caso não exista, retorna NULL (NULL é uma constante simbólica que
indica que o ponteiro não aponta para nenhuma variável). Implemente a função
principal (“main”) para testar a função strchar.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *strchar(char *s, char ch)
{
    int i, cont = 0;
    for (i = 0; s[i] != 0; i++)
    {
        cont++;
    }
    for (i = cont; i > 0; i--)
    {
        if (s[i] == ch)
        {
            return (&s[i]);
        }
    }
    return NULL;
}

int main()
{
    int *p;
    char ch, s[100];
    printf("Digite a string: ");
    gets(s);
    printf("Digite ch: ");
    scanf("%c", &ch);
    p = strchar(s, ch);
    printf("A letra %c ta no endereco %p", *p, p);
}