/*Implemente o  void eliminar(char v [ ], char ch)  que elimina todas as ocorrências do
caractere“ch” no vetor de caracteres “v”. Ao eliminar um caractere, os outros elementos do vetor
devem ser movidos para esquerda. Por exemplo: v = “programacao de computadores” e ch = 'a'. Ao
final do procedimento o conteúdo de “v” deverá ser “progrmco de computadores”. Você não pode
utilizar um vetor auxiliar para implementar o procedimento.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char su[100];
    int n, i, j;
    char letra;
    printf("Digita ai: ");
    scanf("%s", su);
    getchar();
    printf("Digita ai qual letra ce n quer: ");
    scanf("%c", &letra);

    for (i = 0; su[i] != 0; i++)
    {
        if (su[i] == letra)
        {
            for (j = i; su[j] != 0; j++)
            {
                su[j] = su[j + 1];
            }
        }
    }

    printf("O trem sem a letra e %s!!!", su);

    return 0;
}
