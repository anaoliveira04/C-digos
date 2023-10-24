//ACOS39.2 - função que mostra o numero de dias do maior de 3 meses 
//Ana Clara Oliveira Silva - 12/05/2023 

#include <stdio.h>
#include <stdlib.h>

int TabelaDiasMes [12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //31 está na posição 0; 29 está na posição 1;
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
		int m1, m2, m3;
		while (1)
		{
			printf("Forneca 3 numeros inteiros, separados por espaco: ");
			scanf("%d %d %d", &m1, &m2, &m3);
			printf("Os numeros escolhidos foram %d %d e %d \n", m1, m2, m3);
			printf("O maior numero e %d \n", maior_3(TabelaDiasMes[m1-1], TabelaDiasMes[m2-1], TabelaDiasMes[m3-1]));
		}
	}