//ACOS011 - número par ou ímpar 
//Ana Clara Oliveira Silva - 17/03/2023 
//Problema 11 - Solicita um número inteiro ao usuário se o número for par avisa que é par, se não for par avisa que é ímpar 

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num, resto;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	printf("O numero digitado foi: %d\n", num);
	
	resto == num%2;
	
	if (((num%2) == 0) && ((num%3) == 0)) //&& é para 'e', 'and'
			printf("o numero e divisel por 6\n");
	else
	printf("o numero nao e divisivel por 6\n");
	
	system("pause");
}