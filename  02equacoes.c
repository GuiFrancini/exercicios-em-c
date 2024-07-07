/*NAME: 02equacoes.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/09/2023
  DESCRIPTION: algoritmo que resolve equações do 2°grau
*/

#include <stdio.h>
#include <math.h> 
int main()
{ float a, b, c, delta, x1, x2;
 
  printf("Digite o valor de a: ");
  scanf("%f",&a);
  
  printf("Digite o valor de b: ");
  scanf("%f",&b);

  printf("Digite o valor de c: ");
  scanf("%f",&c);

  if (a == 0)
	 printf("\nEstes valores nao formam uma equacao de 2°grau ");
  else
  {
      delta = (b * b) - ( 4 * a * c);
	  if (delta < 0)
	     printf("\nNao existe raiz real ");
      if (delta == 0)
	  {
	     printf("\nExiste uma raiz real: ");
		 x1 = (- b) / (2 * a);
		 printf("%5.2f",x1);
      }
	  if (delta > 0)
	  {
	     printf("\nExistem duas raizes reais");
		 x1 = ( - b + sqrt(delta)) / ( 2 * a);
		 x2 = ( - b - sqrt(delta)) / ( 2 * a);
		 printf("\nPrimeira raiz = %5.2f",x1);
		 printf("\nSegunda raiz = %5.2f",x2);
      }
  }
 getchar();
 return 0;
}
