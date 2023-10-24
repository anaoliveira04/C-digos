//ACOS43 - lista de números primos 
//Ana Clara Oliveira Silva - 25/05/2023 

#include <stdio.h>
#include <stdlib.h>

int fprimo (int N);	// função que determina se um número é primo
void fGraf (int n); // função que "plota" "n" asteriscos na console


main ()
{
int N; 			// número de linhas da lista fornecido pelo usuário
int lin;		// contador das linhas da lista
int primo_tst;	// número sendo testado, para ver se é primo
int primo_ant;	// número primo anterior
int dif;		// diferença entre o número primo apresentado e o número primo anterior

while (1)
{
	// pede e obtém o número de linhas da lista fornecido pelo usuário
	printf ("\n\nForneca o numero N de linhas da lista - ");
	scanf ("%d", &N);
	printf ("O numero N fornecido foi %d\n", N);

	if (N <= 0)	// verifica se deve sair do laço principal
		break;	// sai do laço
		
	// imprime o cabeçalho
	printf ("\n linha     primo  dif.  grafico");
	lin = 1;		// inicia a linha da lista
	primo_tst = 2;	// inicia o número a ser testado
	primo_ant = 1;	// inicia o primo anterior
	while (lin <= N)	// varre todas as linhas da lista
	{
		if (fprimo(primo_tst))	// se o número sendo testado é primo
		{
			// mostra o número e a diferença
			dif = primo_tst - primo_ant;	// calcula a diferença
			printf ("\n%6d  %8d  %4d  ", lin, primo_tst, dif);
			fGraf (dif); // mostra o gráfico da diferença
			primo_ant = primo_tst;	// guarda o primo anterior
			lin++;	// passa para a próxima linha da lista
		}
		primo_tst++;	// passa para o próximo número a ser testado
	}
}
	printf ("\n\nFIM DO PROGRAMA\n\n");
	system ("pause"); // espera o usuário apertar uma tecla
}

int fprimo (int N)	// função que determina se um número é primo
{
	int n;
	
	if((N==0) || (N==1))
		return(0);
		
	for(n=2; n*n<=N; n++)
	{
		if((N%n) == 0)
			return (0);	
	}
	return (1); 
}

void fGraf (int n) // função que "plota" "n" asteriscos na console
{
int k;	// contador auxiliar
	for (k = 1; k <= n; k++)	// varre todos os asteriscos a serem mostrados
		printf ("*");	// mostra um asterisco
}