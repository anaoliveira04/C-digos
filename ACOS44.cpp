//ACOS44 - matriz 2D
//Ana Clara Oliveira Silva - 26/05/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	char Mat [20] [20];
	int l, c; 
	int i, j;
	
	printf("Forneca o numero de linhas: ", l);
	scanf("%d", &l);
	
	printf("Forneca o numero de colunas: ", c);
	scanf("%d", &c);
	
	//preenche a tabela 
	for (i=0; i<l; i++)
		for(j=0; j<c; j++)
		Mat[i][j] = 'x';
	
	//apresenta o cabeçalho
	for (j=0; j<c; j++)
	{
		printf("\t%2d", j);
	}
	
	for (i=0; i<l;  i++)
	{
		printf("\n \n %2d", i);
		for (j=0; j<c; j++)
		printf("\t %c", Mat[i][j]);
	}
	
}