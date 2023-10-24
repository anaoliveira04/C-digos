//ACOS25 - números pares 
//Ana Clara Oliveira Silva - 20/04/2023 

#include <stdio.h>
#include <stdlib.h>
       
main()
{
	int N, k;
	
	while(1)
	{
		printf("Forneca o numero (zero para sair): ");
		scanf("%d", &N);
		printf("o numero escolhido foi: %d \n", N);
		
		if(N==0)
		{
			printf("programa encerrado \n");
			break;
		}
		
		k = 2;
		do
		{
			printf("%d \n", k);
			k = k + 2;
		}
		while(k<2 * N+1);
	}
}