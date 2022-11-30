/* Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
texto.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *arquivo;
    char nome[100];
    char c;
    arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 0;
    }
    printf("Escreva seu nome: ");
    gets(nome);
    fprintf(arquivo, "%s", nome);
    printf("Nome gravado com sucesso!\n");
    fclose(arquivo);
}