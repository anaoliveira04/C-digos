//ACOS18 - Dia da semana
//Ana Clara Oliveira Silva - 30/03/2023 

#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int dia; 
	
	printf("Forneca o dia da semana (entre 1 e 7): ");
	scanf("%d", &dia);
	printf("O dia fornecido foi %d \n", dia);
	printf("\n");
	
	if(0 >= dia || dia >= 8)
	printf("Dia fornecido invalido");
	
	else if(dia == 1)
	printf("Domingo");
	
	else if(dia == 2)
	printf("Segunda");
	
	else if(dia == 3)
	printf("Terca");
	
	else if(dia == 4)
	printf("Quarta");
	
	else if(dia == 5)
	printf("Quinta");
	
	else if(dia == 6)
	printf("Sexta");
	
	else if(dia == 7)
	printf("Sabado");
	
	
}