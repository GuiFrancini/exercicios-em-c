/*NAME:11vetorpos.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE: 25/09/2023
  DESCRIPTION:algoritmo que verifica e armazena numeros positivos e negativos
*/
#include <stdio.h>

int main(){
	
	int num[8], pos[8], neg[8], cont, contNegativo, contPositivo, i;
	contNegativo = 0;
	contPositivo = 0;
	for (i=0;i<8;i++)
		{   printf("Digite o %d.o numero: ", i+1);
			scanf("%d", &num[i]);
			if (num[i] >= 0)
				{ pos[contPositivo] = num[i];
				  contPositivo++;
				}
			else
				{ neg[contNegativo] = num[i];
				  contNegativo++;
				}
		}
	if (contNegativo == 0)
	   printf("\nVetor de negativo is empty");
	else
		 { printf("\nNumeros negativos ");
			 for (i=0;i<contNegativo;i++)
				 printf("\n %d", neg[i]);
		 }
	if (contPositivo == 0)
		 printf("\nVetor de positivos is empty");
	else
		 { printf("\nNumeros positivos ");
		   for (i=0;i<contPositivo;i++)
			   printf("\n%d", pos[i]);
		 }
	getchar();
	return 0;
}

