//ACOAS29.2 - colocar de acordo com aas coordenadas 
//Ana Clara Oliveira Silva - 27/04/2023 

#include <stdio.h>
#include <stdlib.h>
       
main()
{

int L = 1;
int l = 1;
int C;
int c = 1;

while(L != 0)
{

printf("Forneca o numero de linhas e o numero de colunas: ");
scanf("%d %d", &L, &C);


for(l=1; l<=L; l++)
{
	for(c=1; c<=C; c++)
		printf("(%d, %d)", l,c);
	printf("\n");
}

}
	
	
	
	
}