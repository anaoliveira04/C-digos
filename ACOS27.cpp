//ACOS26 - números multiplos de 3 com for
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
		
		
		for(k=3; k<=3*N; k = k+3) //for(início; condição; incremento)
		
			printf("%d \n", k);
			

		
	}
}