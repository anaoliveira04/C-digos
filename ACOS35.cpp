//ACOS35 - concatena strings
//Ana Clara Oliveira Silva - 05/05/2023

#include <stdio.h> // declarações das funções da biblioteca de E/S padrão
#include <stdlib.h> // declarações das funções da biblioteca padrão

// PROBLEMA 34 O programa solicita ao usuário que forneça duas strings de no máximo 20 caracteres
//				O programa gera uma string que é a concatenação das duas strings fornecidas.
//				Exemplo:
//				entrada1: primeira string-
//				entrada2: segunda string
//				saída: primeira string-segunda string

main ()
{
// declarações das variáveis do programa
char str1 [21]; // primeira string fornecida pelo usuário
char str2 [21]; // segunda string fornecida pelo usuário
char concat [41];	// string concatenada
int comp1; // comprimento da primeira string
int k; // contador auxiliar

while (1)	// fica num laço infinito (para poder testar várias strings)
{
	// obtenção das strings
	// pede a primeira string
	printf ("Forneca a primeira string de no maximo 20 caracteres - ");
	// obtém a primeira string
	gets (str1);
	// apresenta a primeira string obtida
	printf ("A primeira string fornecida foi %s\n", str1);
	// pede a segunda string
	printf ("Forneca a segunda string de no maximo 20 caracteres - ");
	// obtém a segunda string
	gets (str2);
	// apresenta a segunda string obtida
	printf ("A segunda string fornecida foi %s\n", str2);

	for (k = 0; str1[k] != '\0'; k++)	// varre os caracteres da primeira string até o fim
		concat[k] = str1[k];	// copia um caracter da primeira string na string concatenada
	comp1 = k; // guarda o comprimento da primeira string
	for (k = 0; str2[k] != '\0'; k++)	// varre os caracteres da segunda string até o fim
		concat[comp1+k] = str2[k];	// copia um caracter da segunda string na string concatenada
	concat[comp1+k] = '\0';		// coloca o fim da string concatenada

	// apresenta a string modificada
	printf ("A STRING CONCATENADA E' %s\n\n", concat);
}

	system ("pause"); // espera o usuário apertar uma tecla
}