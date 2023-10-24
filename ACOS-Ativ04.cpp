//ACOS Atividade 04
//Ana Clara Oliveira Silva - 04/05/2023
////Problema Ativ. 04 - Deve solicitar e carregar em um vetor, 20 números inteiros quaisquer, 
//digitados aleatoriamente. Depois deverá apresentar um menu reciclável.

#include <stdio.h>
#include <stdlib.h>
main ()

{
	//Declaração das variáveis
	int num[20], k, i;
	for(k=0; k<20; k++)
	{
		printf("Digite o numero da posicao (%d): ", k); //Solicitação dos números
		scanf("%d", &num[k]); 
	}
	
	while(1) //Começa o loop
	{
		//Opções do menu
		printf("\n Escolha uma opcao do menu: \n"); 
		printf("\n MENU DE OPCOES: \n");
		printf("1. apresentar todos os numeros digitados na ordem de entrada \n");
		printf("2. apresentar todos os numeros digitados na ordem inversa de entrada \n");
		printf("3. apenas os numeros multiplos de 3 \n");
		printf("4. apenas os numeros precedidos na entrada por um numero par \n");
		printf("Outra opcao qualquer para sair do programa \n");
		scanf("%d", &i);
		
		switch (i)
		{
			//Se a opção 1 for escolhida 
		case 1:
				
				printf("\n Opcao escolhida: 1. apresentar todos os numeros digitados na ordem de entrada \n");
			for(i=0;i<20;i++)
			{
				printf("%d(%d)", num[i], i);
			}
			break;
			
			//Se a opção 2 for escolhida
		case 2:
				
				printf("\n Opcao escolhida: 2. apresentar todos os numeros digitados na ordem inversa de entrada \n");
			for(i=19; i>=0; i--)
			{
				printf("%d(%d)", num[i], i);
			}
			break;
			
			//Se a opção 3 for escolhida
		case 3:
				
				printf("\n Opcao escolhida: 3. apenas os numeros multiplos de 3 \n");
			for(i=0; i<20; i++)
			{
				if(num[i]%3==0)
				{
					printf("%d(%d)", num[i], i);
				}
			}
			break;
			
			//Se a opção 4 for escolhida
		case 4:
				
				printf("\n Opcao escolhida: 4. apenas os numeros precedidos na entrada por um numero par \n");
			for(i=1; i<20; i++)
			{
				if(num[i-1]%2 == 0)
				{
				printf("%d(%d)", num[i], i);
				}
			}
			break;
			
			//Caso qualquer outro caracter (sem ser o do menu) for inserido 
		default:
			
				printf("\n FINALIZANDO PROGRAMA \n");
			return 0;
		}
	} //Sai do loop
}
