//ACOS21 - área e perímetro do círculo
//Ana Clara Oliveira Silva - 13/04/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	float d, a, p;


do //abre um laço 
{
	printf("Foneca o diametro do circulo: ");
	scanf("%f", &d);
	printf("O diametro fornecido foi: %.4f \n", d);
}
while (d<0); //permanece no laço, quando o valor fornecido é invalido
	
	
		a = 3.14*((d/2)*(d/2));
		p = 2*3.14*(d/2);
		printf("A area do circulo vai ser de: %.4f \n", a);
		printf("O perimetro e: %.4f \n", p);
	
	
}