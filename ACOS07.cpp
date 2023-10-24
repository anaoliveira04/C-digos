//ACOS07 - operações aritméticas 
//Ana Clara Oliveira Silva - 16/03/2023

#include <stdio.h>
#include <stdlib.h>

main()
{
	float num_1;
	float num_2;
	
	printf("Forneca o primeiro valor: \n");
	scanf("%f", &num_1);
	printf("Forneca o segundo valor: \n");
	scanf("%f", &num_2);
	
	printf("Calculos:\n");
	printf("soma: %.2f\n", (num_1 + num_2));
	printf("subtracao: %.2f\n", (num_1 - num_2));
	printf("multiplicacao: %.2f\n", (num_1*num_2));
	
	if (num_2 == 0)
	printf( "Nao e possivel a divisao por zero"); 
	
	else
{
	printf("sera possivel fazer a divisao\n");
	printf("divisao: %.2f\n", (num_1/num_2));
}

	//printf("resto: %.2f\n", ( num_1 / num_2)); //em float o resto (num_1%num_2) não vai funcionar, pois não tem necessidade 
	
	
	printf("\n");
	system("pause");
}
