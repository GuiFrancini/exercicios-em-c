/*NAME: 16ponteiro.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE: 16/10/2023
  DESCRIPTION: alogritmo que usa ponteiro
*/

#include <stdio.h>

int main(){
	int num1, num2, *endereco1, *endereco2;
	
	printf("\nInforme o valor do primeiro numero:");
	scanf("%d",&num1);
	printf("\nInforme o valor do segundo numero:");
	scanf("%d",&num2);
	
	endereco1 = &num1;
	endereco2 = &num2;
	
	printf("\nO primeiro valor tem como endereco: %p.",endereco1);
	printf("\nO segundo valor tem como endereco: %p.",*endereco2);
	
	if(endereco1 > endereco2)
		printf("\nO maior endereco e: %p.", endereco1);
	else
		printf("\nO maior endereco e: %p.", endereco2);
	
	return 0;
}
