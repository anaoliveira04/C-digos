//ACOS09 - 
//Ana Clara Oliveira Silva - 16/03/2023 

#include <stdio.h>
#include <stdlib.h>

main()
{
	char letra;
	
	printf("Forneca letra (P/V/O/I): \n");
	scanf("%c", &letra);
	
	if (letra== 'P')
	printf("PRIMAVERA\n");
	
	else if (letra== 'V')
	printf("VERAO\n"); 
	
	else if (letra== 'O')
	printf("OUTONO\n");
	
	else if (letra== 'I')
	printf("INVERNO\n");
	
	else 
	printf("Letra invalida");
}