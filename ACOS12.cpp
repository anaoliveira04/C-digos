//ACOS012 - número de raízes da equação do segundo grau 
//Ana Clara Oliveira Silva - 17/03/2023 

#include <stdio.h>
#include <stdlib.h>

main()
{
	float a,b,c; 
	float delta; 
	
	printf("Forneca os tres coeficientes da equacao: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("os numeros escolhidos foram: %.0f %.0f %.0f\n", a, b, c);
	
	delta = ((b*b) - (4*a*c));
	
	
	if (delta>0)
		printf("A equacao tem 2 raizes\n");
	
	else if (delta==0)
		printf("A equacao tem 1 raiz\n");
		
	else if (delta<0)
		printf("A equacao nao tem raiz\n");
	
	
}