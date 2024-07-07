/*NAME:04media.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/09/2023
  DESCRIPTION: algoritmo que calcula a media ponderada de 3 valores
*/


#include <stdio.h>
int main()
{
 float notaTrab, avaliacaoSem, exame, media;
 printf("\nDigite a nota do trabalho em laborat�rio: ");
 scanf("%f",&notaTrab);
 printf("\nDigite a nota da avalia��o semestral: ");
 scanf("%f",&avaliacaoSem);
 printf( "\nDigite a nota do exame final: ");
 scanf("%f",&exame);
 media = (notaTrab * 2 + avaliacaoSem * 3 + exame * 5) / 10;
 printf( "\nM�dia ponderada: %5.2f",media);
 if (media >=8 && media <=10)
	 printf( " Obteve conceito A");
 if (media >=7 && media < 8)
	 printf( " Obteve conceito B");
 if (media >= 6 && media < 7)
	 printf( " Obteve conceito C");
 if (media >= 5 && media < 6)
	 printf( " Obteve conceito D");
 if (media >= 0 && media < 5)
	 printf( " Obteve conceito E");
 getchar();
 return 0;
}
