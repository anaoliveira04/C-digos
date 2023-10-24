//ACOS28 - 10 numeros múltiplos de N do jeito que o professor prefere 
//Ana Clara Oliveira Silva - 27/04/2023

#include <stdio.h>
#include <stdlib.h>
       
main()
{
	int N, k;
	
	while(1)
	{
	printf("Forneca o numero N: ");
	scanf("%d", &N);
	printf("O numero N fornecido foi: %d \n", N);
	
	if(N==0)
	{
		printf("Programa encerrado \n");
	break;
	}
	for(k=1; k<=10; k++)
	printf("%d \n", k*N);
	}
	
	
	
	
	
}