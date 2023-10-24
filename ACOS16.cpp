////ACOS16 - maior e menor de cinco números 
//Ana Clara Oliveira Silva - 24/03/23

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c, d, e; 
	
	printf("forneca os numeros: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e); //pega os 5 números 
	printf("os numeros sao: %d, %d, %d, %d, %d \n", a, b, c, d, e); 
	printf("\n");
	
	int maior;
	
	maior = a; 
	
	
 	if (b > maior)
	maior = b;
	
	else if (c > maior)
	maior = c; 
	
	else if (d > maior)
	maior = d; 
	
	else if (e > maior)
	maior = e; 
	
	printf("o numero maior e: %d", maior);
}