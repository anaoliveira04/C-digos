//ACOS23 - dupla conversão de temperatura
//Ana Clara Oliveira Silva - 14/04/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	float temp, Tc, Tf;
	char unid;
	
do
{
	printf("Forneca a temperatura e a letra da unidade (C para Celsius e F para Fahrenheit, se quiser sair do programa digte X): ");
	scanf("%f %c", &temp, &unid);
	printf("A termperatuda e a unidade fornecida foi: %.2f %c \n", temp, unid);
	
		if (unid == 'C')
	{
		Tf = (9*temp /5) + 32;
		printf("A temperatura em Fahrenheit e de: %.2f F\n", Tf);
	}
	
	if (unid == 'F')
	{
		Tc = 5*(temp-32)/9;
		printf("A temperatura em Celsius e de: %.2f C\n", Tc);
	}
	

	}
	while (unid != 'X'); 
		
}