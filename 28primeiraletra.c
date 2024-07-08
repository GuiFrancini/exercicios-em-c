/*NAME:28primeiraletra.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:11/11/2023
  DESCRIPTION: algoritmo que troca a primeira letra de cada palavra para maiuscula
*///4. Faça um programa que receba uma frase com letras minúsculas e converta a primeira letra de cada palavra da frase para maiúscula.
//Exemplo:
//- Entrada: fazer exercícios faz bem.
//- Saída: Fazer Exercícios Faz Bem.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[100];
    int i;

    printf("Digite uma frase: ");
    gets(frase);
    strlwr(frase);

    for (i=0;i<strlen(frase)+1;i++)
     {
        if (i==0 || frase[i-1] ==' ')
            frase[i] =toupper(frase[i]);
        else
            frase[i] = frase[i];
    }
    printf("Frase: %s\n", frase);
    getchar;
    return 0;
   
}