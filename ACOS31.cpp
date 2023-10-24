//ACOS31 - conta caracteres numa string 
//Ana Clara Oliveira Silva - 04/05/2023

//"\0" --> fim de texto de uma string 

#include <stdio.h>
#include <stdlib.h>

main()
{
	char str [21]; //vetor de caracteres, não precisa ser necessariamente 'str'
	int num_carac; //numero de caracteres da string 
	int k; //contador auxiliar 
	
	while(1)
	{
		printf("Forneca uma string de no maximo 20 caracteres: ");
		scanf("%s", str); //vetor não precisa de '&' ou poder ser &str[0]
		printf("A string fornecida foi %s\n", str);
		
		num_carac = 0;
		for(k=0; str[k] != '\0'; k++)
		{
			num_carac++;
		}
		printf("A string %s tem %d caracter(es) \n", str, num_carac);
	}
}