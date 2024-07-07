/*NAME: 14matrizmaior.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que implementa uma matrizz 6x4 separa os numeros maiores que 30
*/
#include<stdio.h>

int main ()
{
	int mat1[6][4], mat2[6][4], i, j, qtde;
	
	printf("Digite os elementos da matriz 6 X 4 \n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\nElemento da linha %d com coluna %d: ", (i+1),(j+1));
			scanf("%d", &mat1[i][j]);
		}
	}
	
   qtde=0;
   for(i=0;i<6;i++)
   {
   		for(j=0;j<4;j++)
   		{
			if(mat1[i][j]>30)
				qtde++;//qtde=qtde+1;
		}
   }
	
   for(i=0;i<6;i++)
   {
    	for(j=0;j<4;j++)
		{
			if(mat1[i][j]==30)
				mat2[i][j]=0;
			else
				mat2[i][j]=mat1[i][j];
		}
   }
   
   printf("\nImprimir a matriz resultado \n");
   for(i=0;i<6;i++)
   {
    	for(j=0;j<4;j++)
		{
			printf("%d ", mat2[i][j]);
	    }
	    printf("\n");
   }
   printf("\nQuantidade de numeros maiores que 30 = %d", qtde);
   getchar();
   return 0;
}
