//ACOS33 - reverte uma string 
//Ana Clara Oliveira Silva - 04/05/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	char str [21];
	char a[21];
	int k; 
	
	while(1)
	{
		printf("Forneca uma string de no maximo 20 caracteres: ");
		scanf("%s", str); //vetor não precisa de '&' ou poder ser &str[0]
		printf("A string fornecida foi %s\n", str);
		
		a = 0;
		for(k=0; str[k] != '\0'; k++)
		{
			
		}
			printf("A string invertida e: %s", a);
		
		
			
	}
}