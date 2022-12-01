/* Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
binário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *arquivo;
    char nome[100]; 
    printf("Digite o nome: ");
    gets(nome);
    arquivo = fopen("arquivo.bin", "wb");
    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 0;
    }
    fwrite(nome, sizeof(char), 100, arquivo);
    printf("Gravado com sucesso!!");
    fclose(arquivo);
}