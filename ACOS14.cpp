//ACOS14 - maior e menor 
//Ana Clara Oliveira Silva - 23/03/23

main()
{
	int um, dois;
	
	printf("Forneca os numeros: ");
	scanf("%d %d", &um, &dois); //pega mais de um número 
	printf("Os numeros sao: %d, %d \n", um, dois);
	
	if (um > dois)
	{
		printf("O numero menor e %d \n", um);
		printf("O numero maior e %d \n", dois);
	}
	else //se nenhuma delas for verdadeira, execute isso 
	printf("Os numeros %d e %d sao iguais \n", um, dois);
}

//!= é diferente de 
//&& significa e 
//|| siginifica ou 