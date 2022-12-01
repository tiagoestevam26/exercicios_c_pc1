/* Implemente um programa que realiza a cópia de um arquivo. Teste seu programa com um
arquivo de áudio ou uma imagem.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    FILE *arquivo, *copia;
    
    char ch;
    arquivo = fopen("imagem.jpg","r");
    copia = fopen("copia.jpg","w");
    
    ch = fgetc(arquivo);
    while(ch!=EOF){
        fputc(ch, copia);
        ch = fgetc(arquivo);
    }

    fclose(arquivo);
    fclose(copia);
}