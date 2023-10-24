//ACOS48 - cadastro de um aluno
//Ana Clara Oliveira Silva - 02/06/2023

// PROBLEMA 48	Fazer o cadastro e a apresentação de dados de um aluno.
//				Os dados a serem cadastrados são:
//				o nome, a turma, a idade e a média do aluno.
//	ATENÇÃO: ESTE ARQUIVO ESTÁ PARCIALMENTE COMPLETO.
//	VOCÊ DEVE SUBSTITUIR OS "XXXXX" PELOS CAMPOS DA ESTRUTURA "stAluno"
//	UTILIZADOS PELO PROGRAMA NAS FUNÇÕES "printf" E "scanf"

// "defines" utilizados


#define MAX_COMP_NOME	40

// estruturas utilizadas
	// estrutura do cadastro de um aluno
struct stAluno	// estrutura dos dados de um aluno
{
	char nome [MAX_COMP_NOME+1];	// nome do aluno ("string")
	char turma;		// turma do aluno (um caracter)
	int idade;		// idade do aluno (número inteiro)
	float media;	// nota média do aluno (número "float")
};

// declarações dos protótipos das funções utilizadas
#include <stdio.h>	
#include <stdlib.h> 

void MostraAluno (struct stAluno a);	// mostra os dados de um aluno cadastrado
void LimpaEntrada (void);	// limpa o "buffer" de entrada pelo teclado
							// deve ser utilizada quando usa "scanf"

// programa principal
main ()
{
struct stAluno aluno;	// cadastro do aluno

while (1)
{
	// pede, obtém e armazena os dados do aluno
	printf ("\nFAZENDO CADASTRO DE ALUNO\n");
	// cadastra o nome do aluno
	printf ("Forneca o nome do aluno (no maximo %d caracteres) - ", MAX_COMP_NOME);
	gets (aluno.nome); // lê o nome do aluno
	// cadastra a turma do aluno
	printf ("Forneca a turma do aluno - ");
	scanf ("%c", &aluno.turma);	// lê a turma do aluno
	LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
	// cadastra a idade do aluno
	printf ("Forneca a idade do aluno - ");
	scanf ("%d", &aluno.idade);	// lê a idade do aluno
	LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
	// cadastra a média do aluno
	printf ("Forneca a media do aluno - ");
	scanf ("%f", &aluno.media);	// lê a média do aluno
	LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")

	MostraAluno (aluno);	// mostra os dados cadastrados do aluno
}
	printf ("\n\nFIM DO PROGRAMA\n\n");
	system ("pause"); // espera o usuário apertar uma tecla
}

// mostra os dados de um aluno cadastrado
void MostraAluno (struct stAluno a)
{
	printf ("\nMOSTRANDO CADASTRO DE ALUNO\n");
	printf ("Nome: %s\n", a.nome);			// mostra o nome do aluno
	printf ("\tTurma: %c\n", a.turma);		// mostra a turma do aluno
	printf ("\tIdade: %d\n", a.idade);		// mostra a idade do aluno
	printf ("\tMedia: %.2f\n", a.media);	// mostra a média do aluno
}

// limpa o "buffer" de entrada pelo teclado
// deve ser utilizada quando usa "scanf"
void LimpaEntrada (void){ 
char carac;
	// "receita de bolo"
	while ((carac = fgetc(stdin)) != EOF && carac != '\n');
}
