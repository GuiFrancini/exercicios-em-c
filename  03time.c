/*NAME:03time.c
  AUTHOR:Guilherme Francini de Oliveira
  DATE:04/09/2023
  DESCRIPTION: algoritmo que implementa funções da biblioteca time.h
*/


#include <stdio.h>
#include <time.h>
int main()
{   
    // tm_sec - segundos da hora do sistema (0 a 59)
    // tm_min - minutos da hora do sistema (0 a 59)
    // tm_hour - horas da hora do sistema (0 a 23)
    // tm_mday - dia da data do sistema (1 a 31) 
    // tm_mon - m s da data do sistema (0 a 11) 
    // tm_year - ano da data do sistema (desde 1900)
    // tm_wday - dia da semana da data do sistema (0 a 6, sendo o 0 o domingo)
	time_t tempo; //variavel do tipo time 
    struct tm *dataHora;  
    int dia, mes, ano, hora, min;  
    //Pega a data e a hora atual do sistema 
    tempo = time(NULL); 
    dataHora = localtime(&tempo);
    dia = dataHora -> tm_mday;
    mes = dataHora -> tm_mon + 1;
    ano = dataHora -> tm_year + 1900;
    hora = dataHora -> tm_hour;
    min = dataHora -> tm_min;
    printf("\nData Atual: ");
     if (dia<=9)
	  printf("0%d",dia);
	 else
	  printf("%d",dia);
 	 
     	 switch(mes)
	 { 
        case 1: printf("/janeiro/");
		     break;
	    case 2: printf("/fevereiro/");
			 break;
		case 3: printf("/marco/");
			 break;
		case 4: printf("/abril/");
			 break;
		case 5: printf("/maio/");
			 break;
		case 6: printf("/junho/");
			 break;
		case 7: printf("/julho/");
			 break;
		case 8: printf("/agosto/");
			 break;
		case 9: printf("/setembro/");
			 break;
		case 10: printf("/outubro/");
			 break;
		case 11: printf("/novembro/");
			 break;
		case 12: printf("/dezembro/");
			 break;
	 }
    printf("%d",ano);
    ano = dataHora -> tm_year + 1900;
    hora = dataHora -> tm_hour;
    min = dataHora -> tm_min;
    printf("\nHora Atual: ");
    if (hora<=9)
	   printf("0%d:",hora);
    else
       printf("%d:",hora);
    if (min<=9)
	   printf("0%d",min);
    else
       printf("%d",min);
    
    getchar();//Para o programa a espera de um ENTER
	return 0;
}
