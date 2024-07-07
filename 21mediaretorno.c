/*NAME:21mediaretorno.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que calcula a media de 3 numeros
*/
//media com retorno

#include <stdio.h>

float calcula_media(float,float,float,char);

int main()
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

	media = calcula_media(nota1, nota2, nota3,letra);

	if(letra=='A')
		printf("\nMedia aritmetica: %5.2f",media);
	else
		printf("\nMedia ponderada: %5.2f",media);
	return 0;
}

float calcula_media(float n1, float n2, float n3, char letra)
{
	float media;

	if(letra=='A')
		media = (n1+n2+n3)/3;
	else 
		media = ((n1*5)+(n2*3)+(n3*2))/10;
		
	return media;	
}

