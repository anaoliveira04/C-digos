//ACOS Atividade 06
//Ana Clara Oliveira Silva - 02/06/2023

//Problema Ativ. 06 - O programa deve solicitar ao usuário uma data inicial e uma data
//final, cada uma delas constituída por três números inteiros, correspondendo, 
//respectivamente, ao dia, ao mês e ao ano. Caso as datas sejam válidas e estejam 
//entre 01/01/1600 e 31/12/3000, o programa deve calcular e apresentar o número de
//dias que separam essas duas datas fornecidas.

#include <stdio.h>
#include <stdlib.h>

//declaração da lista e das funções
int TabelaAno[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int fAnoBissexto(int ano);
int fDataValida(int dia, int mes, int ano);
int fDiasInicioAno(int dia, int mes, int ano);
int fDiasFimAno(int dia, int mes, int ano);
int fQtdeDiasCorridos(int d1, int m1, int a1, int d2, int m2, int a2);

main()
{
	//declaração das variáveis
	int d1, m1, a1;
	int d2, m2, a2;
	int DiasInicio;
	int DiasFim;
	int DiasCorridos;

		
	while(1) 
	{
		printf("Forneca o dia (Ou zero(0) para sair): ");
		scanf("%d", &d1);
		
		printf("Forneca o mes: ");
		scanf("%d", &m1);
		
		printf("Forneca o ano: ");
		scanf("%d", &a1);
	
		printf("A data inicial fornecida foi: %d/%d/%d \n", d1, m1, a1);
		
		printf("Forneca o dia (Ou zero(0) para sair): ");
		scanf("%d", &d2);
		
		printf("Forneca o mes: ");
		scanf("%d", &m2);
		
		printf("Forneca o ano: ");
		scanf("%d", &a2);
	
		printf("A data final fornecida foi: %d/%d/%d \n", d2, m2, a2);
		
		if(fDataValida(d1, m1, a1)) //verifica com a função se a data é válida
		{
			DiasInicio = fDiasInicioAno(d1, m1, a1); //atribui a função a variável
			DiasFim = fDiasFimAno(d1, m1, a1); //atribui a função a variável
			printf("%d dia(s) desde o inicio do ano e %d dia(s) ate o final do ano \n", DiasInicio, DiasFim); //mostra o resultado dos cálculos
			DiasCorridos = fQtdeDiasCorridos(d1, m1, a1, d2, m2, a2);
			printf("%d dia(s) se passaram desde a data inicial ate a data final \n", DiasCorridos); //mostra o resultado dos cálculos
		}
		else //se a data não for válida
			printf("Data Invalida \n");
		
		if(fDataValida(d2, m2, a2)) //verifica com a função se a data é válida
		{
			DiasInicio = fDiasInicioAno(d2, m2, a2); //atribui a função a variável
			DiasFim = fDiasFimAno(d2, m2, a2); //atribui a função a variável
			printf("%d dia(s) desde o inicio do ano e %d dia(s) ate o final do ano \n", DiasInicio, DiasFim); //mostra o resultado dos cálculos
		}
		else //se a data não for válida
			printf("Data Invalida \n");
			
		if(d1==0) //se d(dia) for igual a zero encerra o programa
		{
			printf("Programa Encerrado \n");
			break;
		}
		
		if(d2==0) //se d(dia) for igual a zero encerra o programa
		{
			printf("Programa Encerrado \n");
			break;
		}
	} 
	
	
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
	
	int fQtdeDiasCorridos(int d1, int m1, int a1, int d2, int m2, int a2) //função para cálculo de quantos dias se passaram
	{
		int dias_passados, qtd_dias, b;
		int k; //auxiliar para calcular os anos inteiros
		
		for(k=a1+1; k<a2; k++)
		{
			if(fAnoBissexto(k)) //se for ano bissexto
			{
			dias_passados = dias_passados + 366;
			if(a1==a2)
				dias_passados-366;
			}
			else //se não for ano bissexto 
			{
			dias_passados = dias_passados + 365;
			if(a1==a2)
				dias_passados-365;
			}
			
		}
		return (qtd_dias = fDiasInicioAno(d2, m2, a2) + dias_passados + fDiasFimAno(d1, m1, a1)); //Calcula quantos dias se passaram entre as duas datas
	}



