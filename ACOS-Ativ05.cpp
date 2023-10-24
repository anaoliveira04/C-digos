//ACOS Atividade 05
//Ana Clara Oliveira Silva - 19/05/2023

//Problema Ativ. 05 - O programa deve solicitar ao usuário uma data, constituída por três números inteiros, correspondendo, 
//respectivamente, ao dia, ao mês e ao ano. Caso a data seja válida, calcular e 
//apresentar: a quantidade de dias completos já decorridos desde o início desse ano até essa data 
// e a quantidade de dias que ainda faltam até o final do ano em questão.

#include <stdio.h>
#include <stdlib.h>

//declaração da lista e das funções
int TabelaAno[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int fAnoBissexto(int ano);
int fDataValida(int dia, int mes, int ano);
int fDiasInicioAno(int dia, int mes, int ano);
int fDiasFimAno (int dia, int mes, int ano);

main()
{
	//declaração das variáveis
	int d, m, a;
	int DiasInicio;
	int DiasFim;

		printf("Forneca o dia (Ou zero(0) para sair): ");
		scanf("%d", &d);
		
		printf("Forneca o mes: ");
		scanf("%d", &m);
		
		printf("Forneca o ano: ");
		scanf("%d", &a);
	
		printf("A data fornecida foi: %d/%d/%d \n", d, m, a);
		
	while(d!=0) //se d(dia) for igual a zero encerra o programa
	{
		
		if(fDataValida(d, m, a)) //verifica com a função se a data é válida
		{
			DiasInicio = fDiasInicioAno(d, m, a); //atribui a função a variável
			DiasFim = fDiasFimAno(d, m, a); //atribui a função a variável
			printf("%d dia(s) desde o inicio do ano e %d dia(s) ate o final do ano \n", DiasInicio, DiasFim); //mostra o resultado dos cálculos
		}
		else //se a data não for válida
			printf("Data Invalida \n");
			
		printf("Forneca o dia (Ou zero(0) para sair): ");
		scanf("%d", &d);
		
		printf("Forneca o mes(entre 1-12): ");
		scanf("%d", &m);
		
		printf("Forneca o ano (entre 1600-3000): ");
		scanf("%d", &a);
	
		printf("A data fornecida foi: %d/%d/%d \n", d, m, a);
	}
	printf("Programa Encerrado \n"); 
		return 0;
	
	
}
	int fAnoBissexto (int ano) //função para verificar se o ano é bissexto
	{
		return ((((ano % 4) == 0) && ((ano % 100) != 0) ) || ((ano % 400) == 0));  //Ano é bissexto
	}
	
	int fDataValida (int dia, int mes, int ano) //função para verificar se a data é válida
	{
		if((ano<1600) || (ano>3000)) //ano não pode ser menor que 1600 e nem maior que 3000
			return 0;
		
		if((mes>12) || (mes<1)) //mês não pode ser maior que 12 nem menor que 1 
			return 0;
	
		if(dia<1) //dia não pode ser menor que 1
			return 0;
	
		if(mes==2) //se for o mês de fevereiro
		{
			if(fAnoBissexto(ano)) //se for ano bissexto
			{
				if(dia>29) //o dia não pode ser maior que 29
					return 0;
			}
			
			else //se não for bissexto
			{
				if(dia>28) //o dia não pode ser maior que 28
					return 0;
			}
		}
	
		if((mes==4) || (mes==6) || (mes==9) || (mes==11)) //se for o mês de abril, junho, setembro ou novembro
		{
			if(dia>30) //o dia não pode ser maior que 30
				return 0;
		}
	
		else //se for qualquer outro mes
		{
			if(dia>31) //o dia não pode ser maior que 31
				return 0;
		}
		return(1);
	}
	
	int fDiasInicioAno (int dia, int mes, int ano) //função para o cálculo de quantos dias se passaram
	{
		//declaração das variáveis
		int k; 
		int dias=dia;
		
		//condição e cálculo
		for(k=1; k<mes; k++)
		{
			dias = dias + TabelaAno[k-1];
			if((k==2) && (fAnoBissexto(ano))) //se for fevereiro e ano bissexto
			{
				dias++; //soma mais um dia
			}
		}
		return(dias);
	}
	
	
	int fDiasFimAno (int dia, int mes, int ano) //função para cálculo de quantos dias restam até o fim do ano
	{
		//declaração das variáveis
		int k;
		int diasAno = 365; //total de dias de um ano não-bissexto
		
		if(fAnoBissexto(ano)) //se for ano bissexto
			diasAno++; //soma mais um dia no ano(366)		}
			return(diasAno - fDiasInicioAno(dia, mes, ano)); //subtrai quantos dias se passaram desde o início do ano da quantidade de dias em 1 ano 
			
	}



