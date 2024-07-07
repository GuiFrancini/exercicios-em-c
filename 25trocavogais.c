/*NAME:25trocavogais.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/11/2023
  DESCRIPTION:algoritmo que troca as vogais por um *
  
- Digitar uma frase.
- Pegar o tamanho da frase.
- Percorrer a frase, comparando cada caractere com as vogais.
- Quando encontrar uma vogal, substitu�-la por um asterisco. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char frase[100], letra;
	int i, tam;
	
	printf("\nDigite a frase\n");
	gets(frase);
	
	tam=strlen(frase);
	
	for(i=0;i<tam;i++)
	{	
		letra=toupper(frase[i]);
		
		if(letra=='A' || letra=='E' || letra=='I'
		  || letra=='O' || letra=='U')
		{
			frase[i]='*';	
		}
	}
	
	printf("%s",frase);
	
	getchar();
	return 0;
}






