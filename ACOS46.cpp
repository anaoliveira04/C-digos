//ACOS46 - TABUADA DE MULTIPLICAÇÃO
//Ana Clara Oliveira Silva - 01/06/023

#include <stdio.h>
#include <stdlib.h>
#define COMP_TAB 11

main()
{
	int Tab [COMP_TAB] [COMP_TAB]; //tabuada da multiplicação
	int i, j; // contadores de linhas e colunas 
	
	//preenche a tabela 
	for(i=0; i<COMP_TAB; i++) 
		for(j=0; j<COMP_TAB; j++)
			Tab[i][j] = i*j;
	
	//apresenta o cabeçalho
	for(j=0; j<COMP_TAB; j++)
		printf("\t%2d", j);
	
	//imprime o conteúdo da tabela 
	for(i=0; i<COMP_TAB; i++)
	{
		printf("\n \n %2d", i);
		for(j=0; j<COMP_TAB; j++)
			printf("\t %d", Tab[i][j]);
	}
}