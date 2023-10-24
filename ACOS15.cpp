//ACOS15 - maior e menor de cinco números 
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
	
	if ((a >= b) && (a >= c) && (a >= d) && (a >= e))
	printf("o numero maior e %d \n", a);
	
	else if ((b >= a) && (b >= c) && (b >= d) && (b >= e))
	printf("o numero maior e %d \n", b);
	
	else if ((c >= a) && (c >= b) && (c >= d) && (c >= e))
	printf("o numero maior e %d \n", c);
	
	else if ((d >= a) && (d >= b) && (d >= c) && (d >= e))
	printf("o numero maior e %d \n", d);
	
	else 
	printf("o numero maior e %d \n", e); 
	
	system("pause");  
}