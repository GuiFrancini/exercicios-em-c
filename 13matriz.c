/*NAME: 13matriz.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE: 16/10/2023
  DESCRIPTION:algoritmo que implementa uma matriz 10 por 3 e calcula as notas dos alunos
*/
#include<stdio.h>

int main()
{
	float notas[10][3], menor;
	int i, j, prova1=0, prova2=0, prova3=0, provaMenor=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite a %d nota do aluno %d:",(j+1), (i+1));
			scanf("%f", &notas[i][j]);
		}	
	}	
	
	//Processamento (encontrar menor nota do alunos) e sa�da das informa��es relativas a nota
	for(i=0;i<3;i++)
	{
		printf("\nAluno de numero: %d",(i+1));
		menor = notas[i][0];
		provaMenor=0;
		for(j=0;j<3;j++)
		{
			if(notas[i][j]<menor)
			{
				menor=notas[i][j];
				provaMenor=j;
			}	
		}
		printf("\nA menor nota do aluno %d foi na prova %d",(i+1),provaMenor+1);
		if(provaMenor==0)
			prova1=prova1+1;
		if(provaMenor==1)
			prova2=prova2+1;
		if(provaMenor==2)
			prova3=prova3+1;
	}
	
	printf("\n Quantidade de alunos com a menor nota na prova 1 = %d",prova1);
	printf("\n Quantidade de alunos com a menor nota na prova 2 = %d",prova2);
	printf("\n Quantidade de alunos com a menor nota na prova 3 = %d",prova3);
	getchar();
	return 0;
}
