/* Implemente um programa que solicite um nome de arquivo ao usuário e conte a quantidade
de bytes do arquivo informado. Teste seu programa com os arquivos criados nos exercícios
anteriores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *arquivo;
    char nome_arquivo[100];
    int tamanho;
    printf("Escreva o nome do arquivo: ");
    gets(nome_arquivo);
    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 0;
    }
    fseek(arquivo, 0, SEEK_END);
    tamanho = ftell(arquivo);
    printf("O arquivo tem %i bytes!!!", tamanho);
    fclose(arquivo);
}