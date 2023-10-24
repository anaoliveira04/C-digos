//ACOS Atividade 01 
//Ana Clara Oliveira Silva - 12/03/2023

#include <stdio.h>
//Problema Ativ.01 - Fazer um programa que converta uma temperatura em Fahrenheit para Celsius 

main()
{
	//Declaração das variáveis 
	float temp_f; //temperatura fahrenheit
	float temp_c; //temperatura celsius 
	
	printf("Digite a temperatura em Fahrenheit: "); //Pede a temperatura em Fahrenheit 
	scanf("%f", &temp_f); //Obtém a temperatura em Fahrenheit
	printf("A temperatura em Fahrenheit e de: %.2f \n", temp_f); //Apresenta a temperatura em Fahrenheit
	
	//Cálculo de conversão da Temperatura em Fahrenheit para Celsius 
	printf("A temperatura em Celsius e de: %.2f \n", temp_c = (temp_f - 32)/1.8); //Apresenta a temperatura em Celsius 
	
}