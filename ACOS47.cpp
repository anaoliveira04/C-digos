//ACOS47 - JOGO DA VELHA 
//Ana Clara Oliveira Silva - 01/06/023

#include <stdio.h>
#include <stdlib.h>

void IniciaTab (char t[3][3]); // inicia um novo jogo, preenchendo o tabuleiro com pontos
void MostraTab (char t[3][3]);	// apresenta o tabuleiro no console
void ObtemJogadaUsu (char t[3][3]);	// pede 2 coordenadas ao usuário, verifica se são válidas (entre 0 e 2),
										// verifica se a posição está vazia, e se tudo estiver OK,
										// preenche essa célula com 'X'
void ObtemJogadaComp (char t[3][3]);	// procura a primeira célula vazia e preenche com 'O'
char AchaEstado (char t[3][3]);		// retorna o estado atual do jogo:
										// = '.'-jogo em curso / ='X'-usuário venceu / ='O'-computador venceu /='-'-empate
void MostraResultado (char e);			// mostra o resultado do jogo (caso já tenha terminado)

main ()
{
char Tab [3] [3];	// tabuleiro do jogo

char estado;	// = '.'-jogo em curso / ='X'-usuário venceu / ='O'-computador venceu /='-'-empate
int i, j;		// contadores de linhas e de colunas

while (1)
{
	IniciaTab (Tab);	// inicia o tabuleiro com vazios ('.')
	MostraTab (Tab);	// mostra a situação atual do tabuleiro
	estado = '.';		// indica que o estado é "jogo em curso"
	while (estado == '.')	// verifica se ainda o jogo está em curso
	{
		ObtemJogadaUsu (Tab);	// obtém a jogada do usuário
		MostraTab (Tab);		// mostra a situação atual do tabuleiro
		estado = AchaEstado (Tab);	// atualiza o estado do jogo
		MostraResultado (estado);	// mostra o resultado do jogo
									// (caso tenha acabado)
		if (estado == '.')	// se o jogo ainda não acabou
		{
			ObtemJogadaComp (Tab);	// obtém a jogada do computador
			MostraTab (Tab);		// mostra a situação atual do tabuleiro
			estado = AchaEstado (Tab);	// atualiza o estado do jogo
			MostraResultado (estado);	// mostra o resultado do jogo
										// (caso tenha acabado)
		}
	}
	printf ("\n\nFIM DO JOGO\n\n");
	system ("pause"); // espera o usuário apertar uma tecla
}
}

void IniciaTab (char t[3][3]) // inicia um novo jogo, preenchendo o tabuleiro com .
{
int i, j;	// contadores de linhas e de colunas
	printf ("\n\nCOMECANDO UM NOVO JOGO\n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		t[i][j]='.';
}

void MostraTab (char t[3][3])	// apresenta o tabuleiro no console
{
int i, j;	// contadores de linhas e de colunas
	printf ("\n");
for(i=0;i<3;i++) 
	{
	for(j=0;j<3;j++)
		printf("%c %c",t[i][j],j==3-1?' ':'|');
	if(i!=3-1) 
		printf("\n--------");
		putchar('\n');
	}
}
void ObtemJogadaUsu (char t[3][3])	// pede 2 coordenadas ao usuário, verifica se são válidas (entre 0 e 2),
									// verifica se a posição está vazia, e se tudo estiver OK,
									// preenche essa célula com 'X'
{
int i, j;	// contadores de linhas e de colunas

do
{
	printf("Forneca as coordenadas(entre 0 e 2): ");
	scanf("%d %d", &i, &j);
	if((i<0) || (i>2))
		break;
	if((j<0) || (j>2))
		break;
	if(t[i][j]=='.')
		t[i][j]='X';
} while((i>=0) && (i<=2) && (j>=0) && (j<=2));
}
									
void ObtemJogadaComp (char t[3][3])	// procura a primeira célula vazia e preenche com 'O'
{
int i, j;	// contadores de linhas e de colunas
	for (i=0; i<3; i++)		// varre todas as linhas
		for (j=0; j<3; j++)	// varre todas as colunas
			if (t[i][j] == '.')	// verifica se a posição está vazia
			{
				printf ("\nMINHA JOGADA\nCoordenadas: %d,%d\n", i, j);
				t[i][j] = 'O';	// preenche a posição com uma jogada do computador
				return;
			}
}

char AchaEstado (char t[3][3])			// retorna o estado atual do jogo:
										// = 0-jogo em curso / =1-usuário venceu / =2-computador venceu /=3-empate
{
int i, j;	// contadores de linhas e de colunas
	for (i=0; i<3; i++)	// varre todas as linhas
		// verifica se alguma linha está toda preenchida pelo mesmo jogador
		if ((t[i][0] == t[i][1]) && (t[i][0] == t[i][2]) && (t[i][0] != '.'))
			return (t[i][0]);	// indica o vencedor
	for (j=0; j<3; j++)	// varre todas as colunas
		// verifica se alguma coluna está toda preenchida pelo mesmo jogador
		if ((t[0][j] == t[1][j]) && (t[0][j] == t[2][j]) && (t[0][j] != '.'))
			return (t[0][j]);	// indica o vencedor
	// verifica se a diagonal para a direita está toda preenchida pelo mesmo jogador
	if ((t[0][0] == t[1][1]) && (t[0][0] == t[2][2]) && (t[0][0] != '.'))
			return (t[0][0]);	// indica o vencedor
	// verifica se a diagonal para a esquerda está toda preenchida pelo mesmo jogador
	if ((t[0][2] == t[1][1]) && (t[0][2] == t[2][0]) && (t[0][2] != '.'))
			return (t[0][2]);	// indica o vencedor
	// se chegou até aqui, é porque ainda não houve um vencedor
	for (i=0; i<3; i++)		// varre todas as linhas
		for (j=0; j<3; j++)	// varre todas as colunas
			if (t[i][j] == '.')	// verifica se encontrou uma posição vazia
				return '.';		// indica "jogo em curso" (ainda não acabou)
	// se chegou até aqui, é porque não há posição vazia (e nem vencedor)
	return '-';	// indica empate
}

void MostraResultado (char e)			// mostra o resultado do jogo (caso já tenha terminado)
{
	switch (e)	// verifica qual é o estado atual
	{
		case '.':	// "jogo em curso": não há nada a fazer
			break;
		case 'X':	// o usuário é o vencedor
			printf ("\nPARABENS! VOCE GANHOU!\n\n");
			break;
		case 'O':	// o computador é o vencedor
			printf ("\nEU VENCI!\n\n");
			break;
		case '-':	// empate
			printf ("\nDEU EMPATE!\n\n");
			break;
	}
}