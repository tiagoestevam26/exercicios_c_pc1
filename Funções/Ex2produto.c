/*Implemente uma função que recebe 2 números inteiros como parâmetro e retorna e a multiplicação
desses números. A multiplicação não deve ser feita utilizando o operador “*”, em vez disso utilize
apenas o operador de adição “+”. Implemente o programa principal para testar sua função.
*/

#include <stdio.h>

int prod(int x, int y)
{
  int cont, s = 0;
  for (cont = 1; cont <= y; cont++)
  {
    s = s + x;
  }
  return (s);
}

int main()
{
  int n1, n2, saida;
  printf("Digite o primeiro valor: ");
  scanf("%i", &n1);
  printf("Digite o segundo valor: ");
  scanf("%i", &n2);
  saida = prod(n1, n2);
  printf("O produto e : %i", saida);

  return 0;
}
