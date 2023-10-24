//ACOS - compras na feira -  só laranjas e maçã 
//Ana Clara Oliveira Silva - 09/03/2023

#include <stdio.h>
//Problema 04 - Fui à feira e comprei 7 laranjas e 5 maçãs 
//Faça um programa que escreva a seguinte mensagem:
//num. laranjas = 7
//num. maçãs = 5
//num. bananas = 4
//num. total de frutos = 16

main ()
{
	//apresenta os dados estatísticos das minhas compras na feira 
	printf("Usando 10 printf()\n");
	printf("num. laranjas = %d \n", 7); //apresenta o número de laranjas 
	printf("num. macas = %d \n", 5); //apresenta o número de maçãs 
	printf("num. bananas = %d \n", 4); //apresenta o número de bananas
	printf("num. total de frutas = %d \n", 7 + 4 + 5); //apresenta o número total de frutas
	printf("preco de cada laranja = R$ %.2f \n", 7*2.); //apresenta o preço da laranja
	printf("preco de cada maca = R$ %.2f \n", 5*5.); //apresenta o preço da maçã 
	printf("preco de cada banana = R$ %.2f \n", 4*1.); //apresenta o preço da banana
	printf("preco total = R$ %.2f \n", 7*2. + 5*5. + 4*1.); //apresenta o valor total da compra
	printf("troco para 50 = R$ %.2f \n", 50 - (7*2. + 5*5. + 4*1.)); //apresenta o valor do troco
	printf("preco medio de cada fruta = R$ %.2f \n", (7*2. + 5*5. + 4*1.)/(7 + 4 +5)); //apresenta o preço médio da fruta
}

