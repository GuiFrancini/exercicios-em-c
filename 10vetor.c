/*NAME: 10vetor.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:25/09/2023
  DESCRIPTION:algoritmo que preenche um vetor com 9 numeros e verifica se ele e primo
*/
#include <stdio.h>

int main(){ 
	int num[9], i, j, cont;

	for (i=0;i<9;i++)
	{ printf("\nDigite o %d.o numero: ", i+1);
	  scanf("%d", &num[i]);
	}
	for (i=0;i<9;i++)
	{   cont = 0;
		for (j=1;j<=num[i];j++)
		{ if (num[i] % j == 0)
			 cont++;
		}
		if (cont <= 2)
			 { printf("\nNumero primo: %d na posicao %d", num[i], i);
			 }
	 }
	 getchar();
	 return 0;
}

