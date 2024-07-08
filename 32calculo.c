/*NAME:32salarios.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/11/2023
  DESCRIPTION: algoritmo que calcula a potencia, o cubo, raiz quadrada e finaliza com 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");
float valor, quadrado, cubo, raiz, condicao=1;

 while (condicao>=0)
   printf("Digite um valor:");
   scanf("%f",&valor);  

  quadrado = valor*valor;
  cubo= valor*valor*valor;
  raiz=sqrt(valor);

   if(valor>=0){

           printf("\nquadrado: %.2f", quadrado);
           printf("\ncubo: %.2f", cubo);
           printf("\nraiz: %.2f\n", raiz);

}
else condicao= -1;

   
  printf("Saiu!");

   getchar();
   return 0;

}