/*NAME:12vetorordenado.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE: 25/09/2023
  DESCRIPTION: Algoritmo que ordena os numeros digitados pelo usuario
*/

#include <stdio.h>
int main()
{ int vet[8], i, j, z, aux;
	i = 0;
	while (i<8)
	{   
		printf("\nDigite o %d°o elemento do vetor: ", (i+1));
		scanf("%d", &aux);
		j = 0;
		while (j < i && vet[j] < aux)
		{ 
		  j++;
		}
		z = i;
		while (z >= j + 1)
		{ 
		  vet[z] = vet[z-1];
		  z--;
		}
		vet[j] = aux;
		i++;
	}
	printf("\nVetor ordenado");
	for (i=0;i<8;i++)
	{
		printf("\n%d", vet[i]);
	}
	getchar();
	return 0;
}

