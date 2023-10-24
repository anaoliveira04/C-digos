//ACOS36 - string sem espaço 
//Ana Clara Oliveira Silva - 11/05/2023 

#include <stdio.h>
#include <stdlib.h>

main()
{
	char str_usu[101];
	char str_ger[101];
	int k_usu, k_ger;
	
	while(1)
	{
		printf("Forneca uma string de no maximo 100 caracteres: ");
		gets(str_usu);
		printf("A string fornecida foi %s\n", str_usu);
		
		k_ger = 0;
		for(k_usu = 0; str_usu[k_usu] != '\0'; k_usu++)
		{
			if(str_usu[k_usu] != ' ')
			{
			str_ger[k_ger] = str_usu[k_usu];
			k_ger++;
			} 
		} 
		str_ger[k_ger] = '\0';
		printf("A string %s \n", str_ger);
	}	
}
