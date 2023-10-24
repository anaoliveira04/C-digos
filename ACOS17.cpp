//ACOS17 - Calculadora 
//Ana Clara Oliveira Silva - 30/03/2023 

#include <stdio.h>
#include <stdlib.h>
//!= significa diferente; a ordem dos testes impacta no tempo --> se uma operação for feita na maioria das vezes coloca essa operação pra testar primeiro        
main()
{
	int x, y; 
	char op; 
	
	printf("Forneca a operacao: ");
	scanf("%d %c %d", &x, &op, &y);
	printf("A operacao fornecida foi %d %c %d\n", x, op, y);
	printf("\n"); 
	
	if(op == '+')
		printf("A operacao e de soma %d", x + y );	
	
	else if(op == '-')
		printf("A operacao e de subtracao %d", x - y);
	
	else if(op == '*')
		printf("A operacao e de multiplicacao %d", x*y);
	
	else if(op == '/')
	{
		if (y == 0)
			printf("Nao sera possivel fazer a divisao");
		else
			printf("A operacao e de divisao %d", x/y);
	}

	
	else if(op == '%')
	{
		if (y == 0)
			printf("Nao sera possivel fazer a divisao");
		else
			printf("O resto sera de %d", x%y);
	}
		
}