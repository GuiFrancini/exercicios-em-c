/*NAME:27inserirdados.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/11/2023
  DESCRIPTION:algoritmo que insere dados no arquivo.dat do exercicio 26
  */

#include <stdio.h>
#include <string.h>

int main()
{
	struct Aluno{
		//campos a serem inseridos
		int numero;
		char nome[30];
		char curso[3];
		float nota1, nota2;
	};
	
	FILE *arq;
	Aluno aluno1, aluno2;
	
	arq = fopen("e:\\aluno.dat","a++");
	
	if(arq == NULL)
	{
		printf("\nErro na insercao de dados no arquivo");
		getchar();
	}
	else
	{
		printf("\nSucesso na insercao de dados no arquivo");
		printf("\nDigite o numero do aluno a ser incluido:");
		scanf("%d",&aluno1.numero);
		printf("\nDigite o nome do aluno a ser incluido:");
		scanf("%s",aluno1.nome);
		printf("\nDigite o curso do aluno a ser incluido:");
		scanf("%s",aluno1.curso);
		printf("\nDigite o nota1 do aluno a ser incluido:");
		scanf("%f", &aluno1.nota1);
		printf("\nDigite o nota2 do aluno a ser incluido:");
		scanf("%f", &aluno1.nota2);
		while((aluno1.nota1<0) ||(aluno1.nota1>10))
		{
			printf("\nPrimeira nota invalida! Informe a nota1 do aluno:");
			scanf("%f", &aluno1.nota1);	
		}
		while((aluno1.nota2<0) ||(aluno1.nota2>10))
		{
			printf("\nSegunda nota invalida! Informe a nota2 do aluno:");
			scanf("%f", &aluno1.nota2);	
		}
		fread(&aluno2, sizeof(Aluno),1, arq);
		while((!feof(arq)) && (aluno1.numero!=aluno2.numero))
		{
			fread(&aluno2, sizeof(Aluno), 1, arq);
		}
		if(feof(arq))
		{
			fwrite(&aluno1, sizeof(Aluno), 1, arq);
		} 
		getchar();
		fclose(arq);
	}
	return 0;
}
