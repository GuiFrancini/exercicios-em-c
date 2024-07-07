/*NAME:22ordenavetor.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que ordena um vetor(similar ao bubble sort)
*/
#include <stdio.h>

int vetor[5];

void ordena();

int main()
{
	int i;
	
	//Ler o vetor
	for(i=0;i<5;i++)
	{
		printf("Digite o elemento %d do vetor A: ",(i+1));
		scanf("%d",&vetor[i]);
	}
	
	ordena();
	
	//Apresentar vetor
	printf("\nVetor ordenado");
	for(i=0;i<5;i++)
		printf("\n%d - %d",(i+1),vetor[i]);
	
	getchar();
	return 0;
}

void ordena()
{
	int aux;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(vetor[j]>vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
	}
}
