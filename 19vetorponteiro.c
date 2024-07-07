/*NAME:19vetorponteiro.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que dobra o valor de um elemento de um vetor via endereço de memoria
*/

#include <stdio.h>

int main()
{
	int vetor[5], *vetorptr=vetor;
	
	for(int i=0; i<5; i++)
	{
		printf("\nInforme o valor %d do vetor:",i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("\nO dobro do valor para cada item do vetor:");
	
	for(int i=0; i<5; i++)
		printf("\n%d", *(vetor+i)*2); //*(vetor+i) = *vetorptr[i] 
	
	return 0;
}
