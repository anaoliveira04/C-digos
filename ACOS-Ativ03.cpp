//ACOS Atividade 03
//Ana Clara oliveira Silva - 15/04/2023 

#include <stdio.h>
#include <stdlib.h>
//Problema Ativ.03 - Desenvolver um programa para determinar a classificação de uma pessoa em relação ao seu IMC. 
//O programa deve receber do usuário o peso e a altura e, em seguida, deve apresentar a sua classificação conforme
//a tabela. 

main()
{
//Declaração das variáveis 
	int peso;
	float alt, IMC;
	
do //Entra no laço 
{
	printf("Forneca o seu peso (kg) e sua altura (metros): "); //Pede o peso em kilo e a altura em metros 
	scanf("%d %f", &peso, &alt);
	printf("O peso e a altura fornecida foram: %d kg %.2f m \n", peso, alt); 
	
	//Caso o peso e a altura sejam maiores e diferentes de zero o cálculo será feito
	if((peso>0) && (peso!=0) && (alt!=0) && (alt>0))
	{
		IMC = peso/(alt*alt); //Cálculo de IMC
		printf("O seu imc e de: %.1f \n", IMC); //Apresenta o resultado do cálculo 
 	}
 	
	if(peso>0 && alt>0 && IMC<18.5) //Caso o peso e a altura sejam maiores que zero e o IMC seja menor que 18,5
		printf("Peso baixo \n"); //Será apresentado como peso baixo 
	
	//Caso o peso e a altura sejam maiores que zero e o IMC seja maior/igual a 18,5 e menor que 25,0
	else if(peso>0 && alt>0 && (18.5<=IMC) && (IMC<25.0))
		printf("Peso normal \n"); //Será apresentado como peso normal
		
	//Caso o peso e a altura sejam maiores que zero e o IMC seja maior/igual a 25,0 e menor que 30,0
	else if(peso>0 && alt>0 && (25.0<=IMC) && (IMC<30.0))
		printf("Sobrepeso \n"); //Será apresentado como sobrepeso 
	
	//Caso o peso e a altura sejam maiores que zero e o IMC seja maior/igual a 30,0 e menor 35,0
	else if(peso>0 && alt>0 && (30.0<=IMC) && (IMC<35.0))
		printf("Obesidade (Grau 1) \n"); //Será apresentado como Obesidade (Grau 1)
		
	//Caso o peso e a altura sejam maiores que zero e o IMC seja maior/igual a 35,0 e menor que 40,0	
	else if(peso>0 && alt>0 && (35.0<=IMC) && (IMC<40.0))
		printf("Obesidade Severa (Grau 2) \n"); //Será apresentado como Obesidade Severa (Grau 2)
	
	//Caso o peso e a altura sejam maiores que zero e o IMC seja maior/igual a 40,0
	else if(peso>=0 && alt>=0 && 40.0<=IMC)
		printf("Obesidade Morbida (Grau 3) \n"); //Será apresentado como Obesidade Mórbida (Grau 3)
		
		
}
//Permanece no laço caso enquanto o peso e a altura são maiores e diferentes de zero
while ((peso>0) && (peso!=0) && (alt!=0) && alt>0); 

system("pause");
}