/*NAME:31salarios.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/11/2023
  DESCRIPTION: algoritmo que reajusta os salarios com base em parametros
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
setlocale(LC_ALL, "Portuguese");

int filhos;
float salario, resultado;
printf("Digite o numero de quantos filhos você tem:");
scanf("%d",&filhos);

printf("Digite o valor do seu salario:");
scanf("%f", &salario);

if (salario <= 808.80){
    resultado = salario + filhos * 41.27;
}

 else if (salario >= 808.81 && salario<= 1212.64){
    resultado = salario + filhos * 29.16;
}
else if (salario >= 1212.65){
    resultado = salario ;
}

printf("resultado= %5.2f", resultado);

getchar();
return 0;

}
