//ACOS22 - número de linhas
//Ana Clara Oliveira Silva - 13/04/2023
//se n quiser executa o bloco pelo menos uma vez n usar o do while 
#include <stdio.h>
#include <stdlib.h>

main()
{
	int N, num_lin;
	

 printf("Digite o numero de linhasm (0-10): ");
 scanf("%d", &N);
 printf("O numero digitado foi: %d \n", N);

 if ((N >= 0) && (N <= 10))
 {
 	num_lin = 1;
 	//while (num_lin <= N);
	do
		printf("%d\n", num_lin++);
 	while (num_lin <= N);
 }
	 	//	printf("%d\n", num_lin++);
else
  printf("Numero fornecido invalido\n");
 }
 


 

