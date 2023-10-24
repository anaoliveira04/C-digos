//ACOS38 - função que acha o maior de 3 números 
//Ana Clara Oliveira Silva - 12/05/2023 

#include <stdio.h>
#include <stdlib.h>

	int maior_2 (int a, int b)
	{
		if(a>b)
		return (a);
		else 
		return (b);
	}
	
	int maior_3 (int a, int b, int c)
	{
		return (maior_2 (maior_2 (a, b), c));
	}
	
	main ()
	{
		int n1, n2, n3;
		while (1)
		{
			printf("Forneca 3 numeros inteiros, separados por espaco: ");
			scanf("%d %d %d", &n1, &n2, &n3);
			printf("Os numeros escolhidos foram %d %d e %d \n", n1, n2, n3);
			printf("O maior numero e %d \n", maior_3(n1,n2,n3));
		}
	}