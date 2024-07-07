/*NAME: 17ponteiro.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2024
  DESCRIPTION: alooritmo que mostra o endereço de memoria de cada elemento de um vetor
*/

#include <stdio.h>

int main()
{
	float meuarray[10];
	
	for (int i=0; i<10; i++)
	{
		printf("\nInforme o valor %d do vetor.",i+1);
		scanf("%f",&meuarray[i]);
	}
	
	for (int i=0; i<10; i++)
		printf("\nIndice: %d - Valor: %f - Endereco: %p.",(i+1),meuarray[i], &meuarray[i]);
	
	printf("O endereco de %p",&meuarray);
	return 0;
}
