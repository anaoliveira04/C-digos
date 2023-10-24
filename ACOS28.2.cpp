//ACOS28.2 - 10 múltiplos de N 
//Ana Clara Oliveira Silva - 27/04/2023

#include <stdio.h>
#include <stdlib.h>
       
main()
{
	int N = 1, k;
	
	while(N != 0)
	{
	printf("Forneca o numero N: ");
	scanf("%d", &N);
	printf("O numero N fornecido foi: %d \n", N);
	

	for(k=N; k<=10*N; k = k+N)
	printf("%d \n", k);
	}
	
	
	
	
	
}