//ACOS Atividade 02 
//Ana Clara Oliveira Silva - 31/03/2023

#include <stdio.h>
#include <stdlib.h>
//Problema Ativ.02 - Fazer um programa que calcule o tempo de impressão, em horas, minutos e segundos, 
//de uma certa quantidade de folhas, mudando o tempo se for frente-verso ou só frente

main()
{
	//Declaração de variáveis: qpag = quantidade de páginas; fv = frente e verso; qh = quantidade de horas;
	//qm = quantidade de minutos; qs = quantidade de segundos;
	
	int qpag, fv, qh, qm, qs;
	
	
	printf("Digite o numero de paginas: "); //pede o número de páginas que será impresso
	scanf("%d", &qpag); //Obtém o número de páginas
	
	if (qpag<=0) //Caso o número digitado seja negativo ou igual a zero mensagem de número inválido irá aparecer
		printf("Numero inserido invalido, a quantidade de horas tera resultado incorreto"); 
 
 	else //Caso o número digitado seja maior que zero, irá retornar ao usuário o número digitado
		printf("A quantidade de paginas que sera impressa e de: %d \n", qpag);
	
	printf("\n");
	
	//Informa o usuário as condições para imprimir frente ou imprimir frente-verso
	printf("Digite 1 para imprimir frente-verso e qualquer outro caracter para imprimir somente frente \n"); 
	printf("Frente-verso?: "); //Pergunta ao usuário se será frente-verso
	scanf("%d", &fv); //Obtém a resposta do usuário
	

	
	if (fv == 1) //Condição para que a impressão seja frente-verso
	{
		qs = qpag*(60/4); //Cálculo para total em segundos, 4 páginas leva 1 min (60s)
		qh = qs/3600; //Cálculo para quantidade de horas
		qm = (qs%3600)/60; //Cálculo para a quantidade de minutos
		qs = qs%60; //Cálculo para quantidade de segundos
		printf("Impressao sera frente-verso \n"); //Confirma para o usuário que a impressão será frente-verso
		printf("O tempo sera de: %d horas %d minutos %d segundos", qh, qm, qs); //Apresenta o tempo de impressão em horas, minutos e segundos
	}
	
	else //Caso seja qualquer outro caracter o cálculo será feito levando em consideração impressão somente da frente da página
	{
		qs = qpag*(60/5); //Cálculo para o total em segundos, 5 páginas leva 1 min (60s)
		qh = qs/3600; //Cálculo para a quantidade de horas
		qm = (qs%3600)/60; //Cálculo para a quantidade de minutos 
		qs = qs%60; //Cálculo para a quantidade de segundos 
		printf("Impressao sera somente frente \n"); //Confirma para o usuário que será somente frente
		printf("O tempo sera de: %d horas %d minutos %d segundos \n", qh, qm, qs); //Apresenta o tempo de impressão em horas, minutos e segundos 
	}
	
	printf("\n");
	system("pause");
}
