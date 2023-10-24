//ACOS19 - Estações do ano usando Switch
//Ana Clara Oliveira Silva - 30/03/2023 

#include <stdio.h>
#include <stdlib.h>

main()

{
	char estacao;
	
	printf("Fonrneca a letra (V, v, O, o, I, i, P, p): ");
	scanf("%c", &estacao);
	printf("A letra fornecida foi: %c", estacao);
	printf("\n");
	
		switch (estacao)
		{
		case 'V':
			printf("A estacao correspondente e Verao\n");
			break; //não deixa continuar 
		case 'v':
			printf("A estacao correspondente e Verao\n");
			break;
		case 'O':
			printf("A estacao correspondente e Outono\n");
			break;
		case 'o':
			printf("A estacao correspondente e Outono\n");
			break;
		case 'I':
			printf("A estacao correspondente e Inverno\n");
			break;
		case 'i':
			printf("A estacao correspondente e Inverno\n");
			break;
		case 'P':
			printf("A estacao correspondente e Primavera\n");
			break;
		case 'p':
			printf("A estacao correspondente e Primavera\n");
			break;
		default: //nenhuma das anteriores
			printf("Letra invalida");
			break;
		}
}