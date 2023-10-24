//ACOS21 - área e perímetro do círculo
//Ana Clara Oliveira Silva - 13/04/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	float d, a, p;

leitura: 	
 
{
	printf("Foneca o diametro do circulo: ");
	scanf("%f", &d);
	printf("O diametro fornecido foi: %.4f \n", d);
}

	
	
	if (d<0)
{
	printf("Valor invalido\n");
	goto leitura; //pede de novo o valor e volta pro começo 
	}
		
	
	else
	{
		a = 3.14*((d/2)*(d/2));
		p = 2*3.14*(d/2);
		printf("A area do circulo vai ser de: %.4f \n", a);
		printf("O perimetro e: %.4f \n", p);
	}
	
	
	
	
	
	
	
	
}