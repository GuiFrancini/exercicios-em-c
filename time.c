/*NAME:time.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/11/2023
  DESCRIPTION: algoritmo que mostra a hora atual e faz uma soma
*/

#include <stdio.h>
#include <time.h>

int main() {
    // Obtém a hora atual
    time_t t;
    struct tm *info;
    time(&t);
    info = localtime(&t);

    // Exibe a hora atual
    printf("Hora atual: %02d:%02d:%02d\n", info->tm_hour, info->tm_min, info->tm_sec);

    // Realiza uma soma simples
    int numero1, numero2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    // Exibe o resultado da soma
    printf("A soma de %d e %d é: %d\n", numero1, numero2, resultado);

    return 0;
}