//ACOS24 - Calculadora com while 
//Ana Clara Oliveira Silva - 20/04/2023 

#include <stdio.h>
#include <stdlib.h>
//!= significa diferente; a ordem dos testes impacta no tempo --> se uma operação for feita na maioria das vezes coloca essa operação pra testar primeiro        
main()
{
	int x, y; 
	char op; 

while(1)
{
	printf("Forneca a operacao: ");
	scanf("%d %c %d", &x, &op, &y);
	printf("A operacao fornecida foi %d %c %d\n", x, op, y);
	printf("\n"); 
	
	if(op == '+')
		printf("A operacao e de soma %d\n", x + y );	
	
	else if(op == '-')
		printf("A operacao e de subtracao %d\n", x - y);
	
	else if(op == '*')
		printf("A operacao e de multiplicacao %d\n", x*y);
	
	else if(op == '/')
	{
		if (y == 0)
			printf("Nao sera possivel fazer a divisao\n");
		else
			printf("A operacao e de divisao %d\n", x/y);
	}
	
	else if(op == '%')
	{
		if (y == 0)
			printf("Nao sera possivel fazer a divisao\n");
		else
			printf("O resto sera de %d\n", x%y);
	}
if (op == 'X')
break;
}

}