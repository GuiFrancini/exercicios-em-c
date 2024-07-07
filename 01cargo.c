/*NAME: 01cargo.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/09/2023
  DESCRIPTION:algoritmo que reajusta o valor do salario de um cargo
*/
#include <stdio.h>
int main()
{ 
  float salario, aumento, novoSalario;
  int cargo;
  //Mostra mensagem 
  printf("\nDigite o cargo do funcionario (1,2,3,4 ou 5): ");
  //Recebe o valor do cargo
  scanf("%d",&cargo);
  //Mostra mensagem solicitando o valor do salario
  printf("\nDigite o valor do salario: ");
  //Recebe valor do salario
  scanf("%f",&salario);
  
  // Dependendo do cargo informado, apresenta o nome do cargo, valor do aumento e novo salario
  // Caso seja digitado um cargo inexistente, mostra-se a mensagem Cargo Inexistente
  if (cargo == 1)
  {   
      printf("\n cargo Escriturario");
	  aumento = salario * 50 / 100;
	  printf("\n valor do aumento %5.2f",aumento);
	  novoSalario = salario + aumento;
	  printf("\n novo salario  : %5.2f",novoSalario);
  }
  else if (cargo == 2)
			{  
                printf("\n cargo Secretario");
				aumento = salario * 35 / 100;
			    printf("\n valor do aumento %5.2f",aumento);
                novoSalario = salario + aumento;
			    printf("\n novo salario  : %5.2f",novoSalario);
			}
			else if (cargo == 3)
						{   
                            printf("\n cargo Caixa");
							aumento = salario * 20 / 100;
			                printf("\n valor do aumento %5.2f",aumento);
                            novoSalario = salario + aumento;
                   			printf("\n novo salario  : %5.2f",novoSalario);
						}
					 else if (cargo == 4)
								{   
                                    printf("\n cargo Gerente");
									aumento = salario * 10 / 100;
			                        printf("\n valor do aumento %5.2f",aumento);
                                    novoSalario = salario + aumento;
                                    printf("\nOnovo salario  : %5.2f",novoSalario);
								}
							 else if (cargo == 5)
										{   
                                            printf("\n cargo   Diretor");
											aumento = salario * 0 / 100;
			                                printf("\n valor do aumento %5.2f",aumento);
                                   			novoSalario = salario + aumento;
                                      		printf("\n novo salario  : %5.2f",novoSalario);
										}
									 else 
                                          printf("\nCargo Inexistente !");
	
	getchar();// Para o programa a espera de um enter
	return 0;
}
