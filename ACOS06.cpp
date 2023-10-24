//ACOS06 - 10/03/2023 
//Ana Clara Oliveira Silva 

#include <stdio.h>
#include <stdlib.h>

main()
{
	//declaração das variáveis 
	int int_1;
	int int_2;
	int int_3;
	float float_1;
	float float_2;
	float float_3;
	float media;
	
	
	printf("Digite a primeira nota: "); //pede a primeira nota
	scanf("%f", &float_1); //obtém a primeira nota
	printf("A primeira nota foi: %.1f \n", float_1); //apresenta a primeira nota 
	
	printf("Digite o peso 1: "); //pede o peso 1 
	scanf("%d", &int_1); //obtém o peso 1
	printf("Peso 1: %d \n", int_1); //apresenta o peso 1
	
	printf("Digite a segunda nota: ");
	scanf("%f", &float_2);
	printf("A segunda nota foi: %.1f \n", float_2);
	
	printf("Digite o peso 2: ");
	scanf("%d", &int_2);
	printf("Peso 2: %d \n", int_2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &float_3);
	printf("A terceira nota foi: %.1f \n", float_3);
	
	printf("Digite o peso 3: ");
	scanf("%d", &int_3);
	printf("Peso 3: %d \n", int_3);
	
	printf("A media ponderada e: %.1f \n", (float_1*int_1 + float_2*int_2 + float_3*int_3)/(int_1 + int_2 + int_3));
	
	
	
	
	
}