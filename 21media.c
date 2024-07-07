/*NAME:21media.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que calcula a media de 3 numeros
*/
//media sem retorno 
#include <stdio.h>

void calcula_media();

int main()
{
	
	calcula_media();
	return 0;
}

void calcula_media()
{
	float nota1, nota2, nota3, media;
	char letra;
	
	printf("Informe a nota 1: ");
	scanf("%f",&nota1);
	printf("\nInforme a nota 2: ");
	scanf("%f",&nota2);
	printf("\nInforme a nota 3: ");
	scanf("%f",&nota3);
	
	do
	{
		printf("\nInforme uma letra (A- aritmetica e P- ponderada): ");
		scanf(" %c",&letra);
		
	}while((letra!='A') && (letra!='P'));

	if(letra=='A')
	{
		media = (nota1+nota2+nota3)/3;
		printf("\nMedia aritmetica: %5.2f",media);
	}
	else 
	{
		media = ((nota1*5)+(nota2*3)+(nota3*2))/10;
		printf("\nMedia ponderada: %5.2f",media);
	}		
}

