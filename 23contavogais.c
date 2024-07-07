/*NAME:23contavogais.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/11/2023
  DESCRIPTION:algoritmo que conta vogais de uma frase inserida
- Receber uma frase. 
- Pegar tamanho da frase. 
- Percorrer a frase, pegando caracter por caracter. 
- Comparar cada um dos caracteres com as vogais (mai�sculas ou minusculas). 
- Quando encontrar uma vogal, acrescentar um a quantidade do contador de vagais.
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char frase[100];
	int i, tam, qtde = 0;
	
	printf("\nDigite uma frase\n");
	gets(frase);
	
	tam = strlen(frase);

	for(i=0;i<tam;i++)
	{
		if(frase[i]=='a' || frase[i]=='A'|| 
		   frase[i]=='e' || frase[i]=='E'||
		   frase[i]=='i' || frase[i]=='I'||
		   frase[i]=='o' || frase[i]=='O'||
		   frase[i]=='u' || frase[i]=='U')
		{
			qtde=qtde+1;
		}				
	}

	printf("\nQuantidade de vogais = %d.",qtde);
	
	getchar();
	return 0;	
}
