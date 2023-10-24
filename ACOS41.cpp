//ACOS41 - teste quadrado perfeito 
//Ana Clara Oliveira Silva - 19/05/2023

#include <stdio.h>
#include <stdlib.h>

int fquadrado (int N);
main()
{
	int N;
	
	while(1)
	{
	
	printf("Forneca um numero inteiro: ");
	scanf("%d", &N);
	printf("o numero fornecido foi %d: \n", N);
	
	if(N<0)
	break;
	
	if(fquadrado(N))
	printf("O numero %d e um quadrado perfeito \n", N);
	
	else
	printf("O numero %d nao e quadrado perfeito \n", N);
	}
}

int fquadrado(int N)
{
	int n;
	for(n=0; n*n <= N; n++)
	{
		if((n*n) == N)
			return (1);	
	}
	return (0); 

}