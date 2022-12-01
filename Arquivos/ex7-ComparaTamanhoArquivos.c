/* Implemente um programa que compara o tamanho de 2 arquivos e informa qual possui a
maior quantidade de bytes. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *arquivo, *arquivo2;
    int tamanho1, tamanho2;
    arquivo = fopen("arquivo.txt", "rb");
    arquivo2 = fopen("arquivo2.txt", "rb");
    fseek(arquivo, 0, SEEK_END);
    tamanho1 = ftell(arquivo);
    fseek(arquivo2, 0, SEEK_END);
    tamanho2 = ftell(arquivo2);
    
    if(tamanho1>tamanho2){
        printf("O primeiro arquivo tem mais bytes!");
    } else if(tamanho2>tamanho1){
        printf("O segundo arquivo tem mais bytes!");
    }else{
        printf("Os arquivos tem o mesmo numero de bytes!");
    }

    fclose(arquivo);
    fclose(arquivo2);
}