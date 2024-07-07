/*NAME:18endereco.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que troca os valores das variaveis pelo endereço de meemoria
*/


#include <stdio.h>

int main()
{
	int inteiro, inteiroaux, *inteiroptr;
	float real, realaux, *realptr;
	char caracter, caracteraux, *caracterptr;
	
	inteiroptr = &inteiro;
	realptr = &real;
	caracterptr = &caracter;
	
	printf("\nInforme o valor da variavel inteiro:");
	scanf("%d",&inteiro);
	printf("\nInforme o valor da variavel real:");
	scanf("%f",&real);
	printf("\nInforme o valor da variavel caracter:");
	scanf(" %c",&caracter);
	
	printf("\nValores originais:");
	printf("\nInteiro: %d", inteiro);
	printf("\nReal: %f", real);
	printf("\nCaracter: %c", caracter);
	
	//Modificando valores com uso ponteiros
	printf("\nInforme o novo valor da variavel inteiro:");
	scanf("%d",&inteiroaux);
	printf("\nInforme o novo valor da variavel real:");
	scanf("%f",&realaux);
	printf("\nInforme o novo valor da variavel caracter:");
	scanf(" %c",&caracteraux);
	
	*inteiroptr = inteiroaux;
	*realptr = realaux;
	*caracterptr = caracteraux;
	
	printf("\nValores modificados:");
	printf("\nInteiro: %d", inteiro);
	printf("\nReal: %f", real);
	printf("\nCaracter: %c", caracter);
	
	return 0;	
}
