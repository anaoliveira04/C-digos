//ACOS16 - ano bissexto
//Ana Clara Oliveira Silva 

#include <stdio.h>
#include <stdlib.h>

main()
{
	int ano;
	
	printf("Forneca o numero (1600 entre 5000): ");
	scanf("%d", &ano);
	printf("O valor fornecido foi: %d\n", ano);
	
	if ((ano < 1600) || (ano > 5000))
		printf("Numero fornecido invalido");
	else if((ano%4 == 0) && (ano%100 != 0) || (ano%400 == 0))
		printf("O ano e bissexto\n");
	
	else 
	printf("O ano nao e bissexto\n");
	

	
	
}