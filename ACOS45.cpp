//ACOS45 - matriz 2D mudando a célula 
//Ana Clara OLiveira Silva 

#include <stdio.h>
#include <stdlib.h>

// PROBLEMA 45	Gerar e apresentar a tabela (matriz 2D) "char Mat[20][20]"
//				exatamente como no PROBLEMA 44, porém preenchendo a tabela
//				com o caracter '.' (ponto).
//				Depois disso, permanecer num laço, pedindo duas coordenadas
//				ao usuário.
//				Se as coordenadas forem válidas (0 <= linha < L, 0 <= coluna < C),
//				trocar o conteúdo da respectiva célula por 'X',
//				e reapresentar a tabela.
//				Se essa troca já foi feita anteriormente, recolocar
//				um '.' (ponto) nessa célula.
//				Sair do laço quando o usuário fornecer os valores (-1, -1).

main ()
{
char Mat [20] [20];	// tabela (matriz 2D) a ser preenchida e apresentada
int L, C;		// números de linhas e de colunas fornecidos pelo usuário
int i, j;		// contadores de linhas e de colunas
int i_mud, j_mud;	// coordenadas para mudança fornecidas pelo usuário


	// pede e obtém o número de linhas e de colunas
	printf ("Forneca o numero L de linhas - ");
	scanf ("%d", &L);
	printf ("O numero L de linhas fornecido foi %d\n", L);
	printf ("Forneca o numero C de colunas - ");
	scanf ("%d", &C);
	printf ("O numero C de colunas fornecido foi %d\n", C);
	
	// preenche a tabela
	for (i = 0; i < L; i++)
		for (j = 0; j < C; j++)
			Mat[i][j] = '.';
			
while (1)	// permanece no laço
{
	
	// apresenta o cabeçalho
	printf ("\n\n");
	for (j = 0; j < C; j++)
		printf ("\t%2d", j);
	
	// apresenta a tabela
	for (i = 0; i < L; i++)
	{
		printf ("\n%2d", i);
		for (j = 0; j < C; j++)
			printf ("\t %c", Mat[i][j]);
	}
	
	// pede e obtém as coordenadas para mudança
	printf ("\n\n");
	printf ("Forneca o numero da linha para mudanca - ");
	scanf ("%d", &i_mud);
	printf ("O numero da linha para mudanca fornecido foi %d\n", i_mud);
	printf ("Forneca o numero da coluna para mudanca - ");
	scanf ("%d", &j_mud);
	printf ("O numero da coluna para mudanca fornecido foi %d\n", j_mud);
	
	// verifica se é para sair
	if ((i_mud == -1) && (j_mud == -1))
		break;
	
	// verifica se as coordenadas para mudança são válidas
	if ((i_mud >= 0) && (i_mud < L) && (j_mud >= 0) && (j_mud < C))
		if (Mat[i_mud][j_mud] == '.')	// faz a troca
			Mat[i_mud][j_mud] = 'X';
		else
			Mat[i_mud][j_mud] = '.';
	else
		printf ("\n\nCOORDENADAS PARA MUDANCA INVALIDAS\n\n");

}
	

	printf ("\n\nFIM DO PROGRAMA\n\n");
	system ("pause"); // espera o usuário apertar uma tecla
}
