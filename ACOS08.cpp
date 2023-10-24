//ACOS08 - 
//Ana Clara Oliveira Silva - 16/03/2023 

#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota;
	
	printf("forneca a nota: \n"); //pede a nota
	scanf("%f", &nota); //obtém a nota
	printf("a nota fornecida foi: %.1f\n", nota); //apresenta a nota fornecida
	
	//apresentação do resultado 
	
	{
	
	if (nota >= 5 && nota <=10 ) //condição para passar //não coloca ';' depois disso pois se colocar não vai fazer nada
	{ //para dar + de 1 comando depois de uma condição
	    printf("Passou!!\n"); //avisa que passou	 
	}

	 else if (nota<5 && nota>0) //não coloca ';' depois disso pois se colocar não vai fazer nada 
	printf("Nao passou :( \n");
	 
	if (nota == 10)
	    printf("Tirou 10!!\n");
	
	if (nota<0 || nota>10)
		printf("nota invalida\n");
	}
	

	
	

	    
	
	
	

	    
	
	system("pause");
}