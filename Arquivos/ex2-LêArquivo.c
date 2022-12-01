/* Implemente um programa que abra o arquivo texto criado no exercício anterior e
conte quantas vezes a letra “a” aparece no nome.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    FILE *arquivo;
    char ch;
    int cont = 0;
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 0;
    }
    printf("No arquivo tem: ");
    ch = fgetc(arquivo);
    while (ch != EOF)
    {
        if (ch == 'a')
        {
            cont++;
        }
        putchar(ch);
        ch = fgetc(arquivo);
    }
    printf("\nO nome tem %i letras A.", cont);
    fclose(arquivo);
}