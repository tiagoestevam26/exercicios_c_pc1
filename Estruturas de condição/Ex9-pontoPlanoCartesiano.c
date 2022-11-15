/*Implemente um programa que solicita ao usuário as coordenadas x e y (variáveis inteiras) de um
ponto e determina sua posição no plano de acordo com as opções:
1. Ponto na origem
2. Ponto sobre o eixo “x”
3. Ponto sobre o eixo “y”
4. Ponto no 1o. quadrante
5. Ponto no 2o. quadrante
6. Ponto no 3o. quadrante
7. Ponto no 4o. quadrante
Assim que o programa encontrar uma das opções, ele não deve testar as outras. Por exemplo, caso o ponto
esteja no primeiro quadrante, ele não deve testar as opções seguintes. Teste seu programa digitando valores
de x e y que cubram todas as opções acima (de 1 a 7).*/

#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%i", &x);
    printf("Digite o valor de y: ");
    scanf("%i", &y);
    if (x == 0 && y == 0)
    {
        printf("Ponto na origem.\n");
    }
    else if (x == 0 && y != 0)
    {
        printf("Ponto sobre o eixo x.\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("Ponto sobre o eixo y.\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Ponto no 1o. quadrante.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Ponto no 2o. quadrante.\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Ponto no 3o. quadrante.\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Ponto no 4o. quadrante.\n");
    }
    return 0;
}
