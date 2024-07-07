/*NAME:24contapalavras.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/11/2023
  DESCRIPTION:algoritmo que conta as palavras de uma frase
- Digitar uma frase.
- Pegar o tamanho da frase.
- Percorrer a frase, pegando caractere por caractere.
- Comparar cada caractere com espa�o em branco.
- Quando encontrar um espa�o, acrescentar um na quantidade.
- Como ap�s a �ltima palavra n�o tem espa�o, acrescentar um na quantidade. */
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char frase[100];
	int i, tam, qtde=0;
	
	printf("\nDigite a frase\n");
	gets(frase);
	
	tam=strlen(frase);
	
	for(i=0;i<tam;i++)
	{
		if(frase[i]==' ')
			qtde++; //qtde=qtde+1;
	}
	
	printf("\nQuantidade de palavras = %d.",qtde+1);	
	getchar();
	return 0;
}
 
