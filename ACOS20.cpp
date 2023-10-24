//ACOS20 - numero de \n e linhas em switch
//Ana Clara Oliveira Silva - 31/03/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	int N; 
	int num_lin = 0;
	
	printf("Forneca o numero (entre 1 e 10): ");
	scanf("%d", &N);
	printf("O numero fornecido foi: %d \n", N);
	
	switch(N)
	{
		case 10: printf("%d\n", ++num_lin); //++num_lin some 1 e atribui ao %d, caso seja num_lin++ vai ser somado 1 somente na segunda linha 
		case 9: printf("%d\n", ++num_lin);
		case 8: printf("%d\n", ++num_lin);
		case 7: printf("%d\n", ++num_lin);
		case 6: printf("%d\n", ++num_lin);
		case 5: printf("%d\n", ++num_lin);
		case 4: printf("%d\n", ++num_lin);
		case 3: printf("%d\n", ++num_lin);
		case 2: printf("%d\n", ++num_lin);
		case 1: printf("%d\n", ++num_lin);
		
	}
	
	
	
	
	
	
	
}