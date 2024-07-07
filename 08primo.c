/*NAME:08primo.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:25/09/2023
  DESCRIPTION:algoritmo que verifica se um numero é primo
*/
#include <stdio.h>

int main()
{ 
  int i, num, quantidade;
  i = num = quantidade = 0;
  printf("\nDigite um numero: ");
  scanf("%d",&num);
  
  for (i=1;i<=num;i++)
  {
      if (num%i == 0)
	     quantidade = quantidade + 1;
  }
  if (quantidade > 2)
    printf("\nNumero nao e primo");
  else
    printf("\nNumero e primo");
  getchar();
  return 0;
}
