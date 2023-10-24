//ACOS34 - põe números na vogais da string
//Ana Clara Oliveira Silva - 05/05/2023

#include <stdio.h> // declarações das funções da biblioteca de E/S padrão
#include <stdlib.h> // declarações das funções da biblioteca padrão

// PROBLEMA 33 O programa solicita ao usuário que forneça uma string de no máximo 100 caracteres
//				O programa gera uma string que é a string fornecida, 
//				trocando as vogais AEIO por números, de acordo com:
//				A->4 / E->3 / I->1 / O->0
//				Exemplo:
//				entrada: AMENIZOU O PROBLEMA
//				saída: 4M3N1Z0U 0 PR0BL3M4

main ()
{
// declarações das variáveis do programa
char str [101]; // string fornecida pelo usuário
int k; // contador auxiliar

while (1)	// fica num laço infinito (para poder testar várias strings)
{
	// obtenção da string
	// pede a string
	printf ("Forneca uma string de no maximo 100 letras - ");
	// obtém a string
	gets (str);
	// apresenta a string obtida
	printf ("A string fornecida foi %s\n", str);

	for (k = 0; str[k] != '\0'; k++)	// varre os caracteres da string até o fim
		switch (str[k])	// testa um caracter da string
		{
		case 'A':	// verifica se o caracter é 'A'
			str[k] = '4';	// troca 'A' por '4'
			break;	// sai do switch
		case 'E':	// verifica se o caracter é 'E'
			str[k] = '3';	// troca 'E' por '3'
			break;	// sai do switch
		case 'I':	// verifica se o caracter é 'I'
			str[k] = '1';	// troca 'I' por '1'
			break;	// sai do switch
		case 'O':	// verifica se o caracter é 'O'
			str[k] = '0';	// troca 'O' por '0'
			break;	// sai do switch
		default:	// verifica se o caracter não é nenhum dos anteriores
			break;	// não faz nada: mantém o caracter e sai do switch
		}


	// apresenta a string modificada
	printf ("A string modificada e' %s\n\n", str);
}

	system ("pause"); // espera o usuário apertar uma tecla
}