/*NAME:20valores.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:16/10/2023
  DESCRIPTION:algoritmo que ordena 3 valores lidos
*/
#include <stdio.h>

int main() {
  int n1, n2, n3; 
  
  printf("Digite tres numeros: ");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  
  if (n3 > n1)
   if (n1 > n2)
      printf("A ordem crescente: \n %d\n %d\n %d\n", n2, n1, n3);
    else if (n2 < n3)
      printf("A ordem crescente: \n %d\n %d\n %d\n", n1, n2, n3);
  if (n1 > n2)
     if (n2 > n3)
      printf("A ordem crescente: \n %d\n %d\n %d\n", n3, n2, n1);
    else if (n3 < n1)
      printf("A ordem crescente: \n %d\n %d\n %d\n", n2, n3, n1);
  if (n1 < n2)
    if (n3 < n1)
      printf("A ordem crescente:\n %d\n %d\n %d\n", n3, n1, n2);
    else if (n3 < n2)
      printf("A ordem crescente:\n %d\n %d\n %d\n", n1, n3, n2);
      
  return 0;
  getchar();
}
