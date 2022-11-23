/* ) “char *strstr (char *str1, char *str2)” que retorna o endereço de str1 em que
ocorre pela primeira vez a substring str2. Caso a substring str2 não exista em str1,
retorne NULL. Implemente o programa principal para testar a função. No programa
principal, você deve exibir o endereço do primeiro caracter de str1 e também o
endereço de str1 a partir do qual existe uma ocorrência de str2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *strstr(char *s, char *s2)
{
    int m, aux = 0, i, j, cont1 = 0, cont2 = 0;
    for (i = 0; s[i] != 0; i++)
    {
        cont1++;
    }
    for (i = 0; s2[i] != 0; i++)
    {
        cont2++;
    }

    if (cont2 > cont1)
    {
        printf("\nSem compatibilidade!\n\n");
        return NULL;
    }
    else
    {
        for (i = 0; i < cont2; i++)
        {
            for (j = 0; j < cont1; j++)
            {
                if (s[j] == s2[i] && s[j + 1] == s2[i + 1])
                {
                    if (aux == 0)
                    {
                        m = j;
                    }
                    aux++;
                }
            }
            if (aux == cont2 - 1 || aux == cont2)
            {
                break;
            }
        }
    }
    if (aux >= cont2 - 1)
    {
        return (&s[m]);
    }
    else
    {
        printf("\nSem compatibilidade!\n\n");
        return NULL;
    }
}

int main()
{
    int *p, *pr;
    char s[100], s2[100];
    printf("Digite a string1: ");
    gets(s);
    pr = &s[0];
    printf("Digite a srting2: ");
    gets(s2);
    p = strstr(s, s2);
    printf("\nO primeiro endereco da string1 eh %p\n\nA letra %c ta no endereco %p da string1!\n\n", pr, *p, p);
}