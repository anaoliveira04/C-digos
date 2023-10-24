//ACOS26 - números pares com for
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
		for(k=2; k<=2*N; k = k+2)
		
			printf("%d \n", k);
			

		
	}
}