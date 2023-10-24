//ACOS42 - descobrir se o número é primo
//Ana Clara Oliveira Silva 

#include <stdio.h>
#include <stdlib.h>

int fprimo (int N);

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
	
	if(fprimo(N))
	printf("O numero %d e um numero primo \n", N);
	
	else
	printf("O numero %d Nao e um numero primo \n", N);
	}
}

int fprimo(int N)
{
	int n;
	
	if((N==0) || (N==1))
		return(0);
		
	for(n=2; n<N; n++)
	{
		if((N%n) == 0)
			return (0);	
	}
	return (1); 

}