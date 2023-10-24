//ACOS30 -  notas
//Ana Clara Oliveira Silva - 28/04/2023

#include<stdio.h>
#include<stdlib.h>

main()
{
	float nota[10], soma, media, maior; //nota[numero maximo de notas que pode ter]
	int N, k;
	printf("Forneca o numero de notas (no maximo 10): ");
	scanf("%d", &N);
	printf("O numero de notas fornecidas foi: %d \n", N);
	
	for(k = 0; k < N; k++)
	{
		scanf("%f", &nota[k]);
	}
	
	printf("As notas sao: \n");
	
	for(k = 0; k < N; k++)
		printf("%.2f \n", nota[k]);
	//calculo da média 
	soma = 0; 
	for(k = 0; k < N; k++)
	{
		soma = soma + nota[k];
		
	}
	
	media = soma/k;
	printf("A media e de: %.2f \n", media);
	
		
	maior = nota[0];
	for(k=1; k<N; k++)
		if(nota[k]>maior)
			maior = nota[k];
	printf("A maior nota foi %.2f \n", maior);
		
	
	
	
}