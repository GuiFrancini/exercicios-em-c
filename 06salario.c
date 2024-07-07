/*NAME: 06salario.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE: 25/09/2023
  DESCRIPTION:algoritmo que calcula o salario seguindo alguns parâmetros
*/

#include <stdio.h>

int main()
{   int i, anoAtual;
	float salario, novoSalario, percentual;
	printf("Digite o ano atual: ");
	scanf("%d",&anoAtual);
	salario = 1000;
	percentual = 1.5/100;
	novoSalario = salario + salario * percentual;
	for (i=2007;i<=anoAtual;i++)
	{
		percentual = 2 * percentual;
		novoSalario = novoSalario + percentual * novoSalario;
	}
	 printf("Novo salario = %5.2f",novoSalario);
	 getchar();
	 return 0;
}

