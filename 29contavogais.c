/*NAME:29contavogais.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:11/11/2023
  DESCRIPTION: algoritmo que conta quantas vogais tem e substitui uma letra escolhida
*/

 
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    char ch1,ch2,texto[100];
    int x, tamanho,i,j,contador=0;
    char vogais[] = "aeiouAEIOU";
    
    printf ("Digite uma palavra: ");
    gets(texto);
 
    for (i=0;i<strlen(texto);i++){
        for (j=0;j<strlen(vogais);j++){
                if (texto[i] == vogais[j]){
                        contador++;
                }
        }
    }
   
    if (contador == 1){
        printf ("\n\nA palavra informada possui 1 vogal\n\n");
        }else{
                printf ("\n\nA palavra informada possui %d vogais\n\n", contador);
        }
    printf("Digite a palavra novamente :");
    gets(string);
    printf ("Qual letra voce vai substituir? :\n");
    scanf ("%c", &ch1);
    printf ("Letra que vai substituir :\n");
    scanf (" %c", &ch2);
    tamanho=strlen(string);
    for (x=0;x<tamanho;x++){
        if (string[x]==ch1){
            string[x]=ch2;
        }
    }
    printf ("%s", string);
    getchar();
    return 0;
    
}