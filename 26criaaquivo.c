/*NAME:26criaaquivo.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/11/2023
  DESCRIPTION:algoritmo que cria um arquivo.dat 
  */

#include <stdio.h>
int main()
{
	FILE *arq;
	
	arq = fopen("c:\aluno.dat","w");
	
	if(arq==NULL)
		printf("\nErro na criacao do arquivo");
	else
	{
		printf("\nSuceso na criacao do arquivo");
		fclose(arq);
	}	
	getchar();
	return 0;
}
