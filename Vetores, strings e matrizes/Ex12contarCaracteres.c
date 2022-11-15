/*Retorna a quantidade de caracteres existente em um
string passado como parâmetro.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char tui[100];
    int j, i = 0;
    printf("Digita ai: ");
    scanf("%s", tui);
    for (j = 0; tui[j] != 0; j++)
    {
        i++;
    }
    printf("Temos %i caracteres!!!!!!!!", i);

    return 0;
}
