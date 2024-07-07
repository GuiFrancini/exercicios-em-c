/*NAME: 15matriz.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que implementa uma matriz 15x5 e mostra quantas vezes os numeros se repetem
*/


#include <stdio.h>
int main()
{ 
  int mat[15][5], rep[15][5], vezes[15][5], i, j, k, l, linha, linha2, col, x, num, qtde, achou;
  for (i=0;i<15;i++)
  { 
  		for (j=0;j<5;j++)
		{ 
		  printf("\nDigite o elemento %d-%d ", i, j);
		  scanf("%d", &mat[i][j]);
		}
  }
  linha = 0;
  col = 0;
  for (i=0;i<15;i++)
  { 
  	for (j=0;j<5;j++)
	{ 
	  qtde = 1;
	  num = mat[i][j];
	  for (k=0;k<15;k++)
	  { 
	      for (l=0;l<5;l++)
		  { 
		  	   if ((i!=k) || (j!=l))
			   	  if (mat[k][l] == num)
			      	qtde++;
		  } //fim for l
	  } // fim k
     if (qtde > 1)
	    { 
		  achou = 0;
	      if (col == 0)
		     linha2 = linha-1;
	      else
		     linha2 = linha;
	      for (k=0;k<=linha2;k++)
	      { 
		  		if (k<linha2)
		            x=4;
	            else
		            x=col-1;
                for (l=0;l<=x;l++)
		        { 
					if (num==rep[k][l])
			             achou = 1;
		        }
          }
          if (achou == 0)
	      { 
		       rep[linha][col] = num;
	           vezes[linha][col] = qtde;
	           col++;
               if (col > 4)
	           { 
			      linha++;
	              col=0;
	           }
          }
        }
      } //fim for j
   } //fim for i
  for (i=0;i<=linha;i++)
  { 
     if (i<linha)
		 x=4;
 	 else
		 x=col-1;
	 for (j=0;j<=x;j++)
	 { 
	 	printf("\nO numero %d esta repetido %d vezes", rep[i][j], vezes[i][j]);
	 }
	 printf("\n");
  }
  getchar();
  return 0;
}
