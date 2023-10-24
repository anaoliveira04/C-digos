//ACOS39 - pede o numero do mes e mostra a quantidade de dias
//Ana Clara Oliveira Silva - 12/05/2023 

#include <stdio.h>
#include <stdlib.h>

main()
{
int TabelaDiasMes [12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //31 está na posição 0; 29 está na posição 1;
int m;
	while(1)
	{
	printf("Forneca o numero do mes (1-12): ");
	scanf("%d", &m);
	printf("O mes tem %d dias \n", TabelaDiasMes[m-1]);
	}
}