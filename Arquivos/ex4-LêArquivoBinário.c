/* Implemente um programa que abra o arquivo binário criado no exercício anterior e
conte quantas vezes a letra “a” aparece no nome.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *arquivo;
    char nome[100];
    arquivo = fopen("arquivo.bin", "rb");
    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 0;
    }
    fread(nome, sizeof(nome), 1, arquivo);
    printf("\n%s", nome);

    fclose(arquivo);
}