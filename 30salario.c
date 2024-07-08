/*NAME:30salario.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/11/2023
  DESCRIPTION: algoritmo que calcula os salarios baseado no cargo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Portuguese");

int codigo, horas;
float resultado;
printf(" 1.Administrador de Dados \n 2.Analista de suporte \n 3.Analista de Programador\n 4.Programador\n  Insira o codigo do seu cargo:");
scanf("%d",&codigo);

printf("Insira o a quantidade de horas trabalhadas:");
scanf("%d",&horas);

switch(codigo){
    case 1:
    resultado =  horas * 45,32;
     printf("resultado= %7.2f", resultado);
     break;

      case 2:
    resultado =  horas * 32,23;
     printf("resultado= %7.2f", resultado);
     break;

      case 3:
    resultado =  horas * 47,25;
     printf("resultado= %7.2f", resultado);
     break;

      case 4:
    resultado =  horas * 33,70;
     printf("resultado= %7.2f", resultado);
     break;
}

getchar();
return 0;

}