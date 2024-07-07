/*NAME:09triangulo.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:25/09/2023
  DESCRIPTION: algoritmo que calcula a area de um triangulo
*/


#include <stdio.h>
int main()
{ 
  float base, altura, area;
  base = 0;
  while (base <= 0)
  { 
    printf("\nDigite a medida da base \n");
    scanf("%f",&base);
  }
  altura = 0;
  while (altura <= 0)
  {
    printf("\nDigite a medida da altura \n");
    scanf("%f",&altura);
  }
  area = base * altura / 2;
  printf("\n rea = %5.2f",area);
  getchar();
  return 0;
}
