//ACOS05 - 10/03/2023 
//Ana Clara Oliveira Silva

#include <stdio.h>
#include <stdlib.h>

main()
{
	//declarações das variáveis do programa
	int dado_int; //dado inteiro
	float dado_float; //dado com ponto decimal 
	
	printf("Digite um valor inteiro - "); //solicita o dado ao usuário 
	scanf("%d", &dado_int); //obtém o dado digitado
	printf("O valor digitado foi: %d\n", dado_int); //apresenta o dado digitado 
	
	printf("\n"); //pula linha 
	printf("Digite um valor com ponto decimal - "); //solicita o dado ao usuário
	scanf("%f", &dado_float); //obtém o dado digitado 
	printf("O valor digitado foi: %.1f\n", dado_float); //apresenta o dado digitado 
	
	system("pause"); //espera o usuário apertar uma tecla 
	system("date"); //altera a data 
	
}
