/*NAME:05tipos.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/09/2023
  DESCRIPTION: algoritmo que mostra os tipo sanguineos compativeis com o tipo digitado pelo usuario
*/
#include <stdio.h>

void sanguineo(int codigo) {
    switch (codigo) {
        case 1:
            printf("O- pode receber de: O-\n");
            break;
        case 2:
            printf("O+ pode receber de: O- e O+\n");
            break;
        case 3:
            printf("A- pode receber de: O- e A-\n");
            break;
        case 4:
            printf("A+ pode receber de: O-, O+, A- e A+\n");
            break;
        case 5:
            printf("B- pode receber de: O- e B-\n");
            break;
        case 6:
            printf("B+ pode receber de: O-, O+, B- e B+\n");
            break;
        case 7:
            printf("AB- pode receber de: O-, A-, B- e AB-\n");
            break;
        case 8:
            printf("AB+ pode receber de: O-, O+, A-, A+, B-, B+, AB- e AB+\n");
            break;
        default:
            printf("Código inválido.\n");
            break;
    }
}

int main() {
    int codigo;
    
    printf("Informe o código do tipo sanguíneo do paciente (1-8): ");
    scanf("%d", &codigo);

    sanguineo(codigo);
    
    return 0;
}
