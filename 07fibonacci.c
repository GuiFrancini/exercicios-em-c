/*NAME: 07fibonacci.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:25/09/2023
  DESCRIPTION: algoritmo que mostra os 8 primeiros numeros da sequencia de fibonacci
*/

#include <stdio.h>
int main()
{ int cont, num1, num2, res;
  num1 = 0;
  num2 = 1;
  printf("\n%d",num1);
  printf("\n%d",num2);
  for (cont=3;cont<=8;cont++)
  { 
    res = num1 + num2;
    printf("\n%d",res);
    num1 = num2;
    num2 = res;
  }
 getchar();
 return 0;
}
