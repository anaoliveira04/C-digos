//ACOS40 - faz a soma dos dias do mês
//Ana Clara Oliveira Silva - 12/05/2023 

#include <stdio.h>
#include <stdlib.h>

int maior_2(int a, int ano);
int tabela_mes[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int fAnoBissexto(int ano);

int fAnoBissexto(int ano)
{
	if((((ano % 4) == 0) && ((ano % 100) != 0) ) || ((ano % 400) == 0))
		return(1);
	
	else 
		return(0);
}

int maior_2 (int a, int ano)
{
	int b; 
	int k; 
	b=0;
	
	if(fAnoBissexto(ano)==1)
	{
		for(k=a; k>0; k--)
	{
		b+= tabela_mes[k-1];
	}
		return (b);
	} 
	
	else
	{
	for(k=a; k>0; k--)
	{
		b+= tabela_mes[k-1];
	}
		return (--b);
	} 
	
}


main()
{
	int m1, ano;
	printf("Forneca 1 numero inteiro, correspondente a um mes do ano: ");
	scanf("%d", &m1);
	
	printf("Forneca o ano: ", ano);
	scanf("%d", ano);
	printf("Numero de dias passados: %d \n", maior_2 (m1, ano));
	
}