//ACOS32 - conta ocorrencias de um caracter numa string 
//Ana Clara Oliveira Silva - 04/05/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	char str [21];
	char carac;
	int num_oc;
	int k; 
	
	while(1)
	{
		printf("Forneca um caracter e uma string de no maximo 20 caracteres: ");
		scanf("%c %s", &carac, str); //vetor não precisa de '&' ou poder ser &str[0]
		printf("O caracter fornecido foi '%c' e a string fornecida foi %s\n", carac, str);
		
		num_oc = 0;
		for(k=0; str[k] != '\0'; k++)
		{
			if(str[k] == carac)
			num_oc++;
			
		}
		printf("A string %s tem %d ocorrencias do caracter '%c' \n", str, num_oc, carac);
		
		for(k=0; str[k] != '\0', k++)
			
	}
}