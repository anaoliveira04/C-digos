//ACOS49 - gerencia alunos
//Ana Clara OLiveira Silva - 02/06/2023

// PROBLEMA 49	Gerenciar os dados de um grupo de alunos, cadastrados numa tabela.
//				Os dados cadastrados de cada aluno na tabela são:
//					o nome, a turma, a idade e a média.
//				String vazia no nome indica posição da tabela vazia.
//				Ao ser cadastrado, o aluno recebe um número de cadastro,
//					igual à posição ocupada na tabela + 1.
//				Apresentar um Menu com os seguintes comandos:
//					C - Cadastrar um aluno
//					T - Mostrar tabela de dados cadastrados de todos os alunos
//					M - Mostrar os dados cadastrados de um aluno
//					S - Sair do programa
//				Ler a opção fornecida pelo usuário e executar o respectivo comando.
//	ATENÇÃO: ESTE ARQUIVO ESTÁ PARCIALMENTE COMPLETO.
//	VOCÊ DEVE SUBSTITUIR AS LINHAS ASSINALADAS COM "XXXXX" PELOS RESPECTIVOS COMANDOS,
//	DE ACORDO COM OS COMENTÁRIOS.


// "defines" utilizados
	// máximo comprimento do nome do aluno
#define MAX_COMP_NOME	40
	// máximo número de alunos da tabela
#define MAX_NUM_ALUNOS	5

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
#include <stdio.h>	// declarações dos protótipos das funções da biblioteca de E/S padrão
#include <stdlib.h> // declarações dos protótipos das funções da biblioteca padrão

void MostraMenu (void);		// apresenta o menu de comandos
char LeOpcaoMenu (void);	// lê e retorna a opção fornecida
void IniciaTabAlunos (struct stAluno t[MAX_NUM_ALUNOS]);	// inicia a tabela dos dados cadastrados
void CadastraAluno (struct stAluno t[MAX_NUM_ALUNOS]);		// cadastra os dados de um aluno
void MostraCadastro (struct stAluno t[MAX_NUM_ALUNOS], int num_cad); // mostra um cadastro
void MostraTabAlunos (struct stAluno t[MAX_NUM_ALUNOS]);// mostra os dados de todos os alunos
void MostraAluno (struct stAluno t[MAX_NUM_ALUNOS]);	// mostra os dados de um aluno
void LimpaEntrada (void);	// limpa o "buffer" de entrada pelo teclado
							// deve ser utilizada quando usa "scanf"

// programa principal
main ()
{
struct stAluno TabAlunos [MAX_NUM_ALUNOS];	// tabela dos dados cadastros dos alunos
char opcao;	// opção fornecida pelo usuário

	IniciaTabAlunos (TabAlunos);	// inicia a tabela dos dados dos alunos
	opcao = ' ';	// inicia a opção fornecida pelo usuário (para poder entrar no laço)
	while (opcao != 'S')	// permanece no laço enquanto usuário não deu comando 'S'
	{
		MostraMenu ();			// mostra o menu
		opcao = LeOpcaoMenu ();	// pede e lê a opção fornecida pelo usuário
		switch (opcao)			// testa a opção
		{
		case 'C':	// cadastrar os dados de um aluno
			CadastraAluno (TabAlunos);		// cadastra um aluno
			break;
		case 'T':	// mostrar a tabela de dados cadastrados de todos os alunos
			MostraTabAlunos (TabAlunos);	// mostra a tabela
			break;
		case 'M':	// mostrar os dados cadastrados de um aluno
			MostraAluno (TabAlunos);		// mostra o cadastro de um aluno
			break;
		case 'S':	// sair do programa
			break;	
		default:	// opção inválida
			printf ("\nOPCAO INVALIDA\n");	// avisa opção inválida
		}
	}
	printf ("\n\nFIM DO PROGRAMA\n\n");		// avisa fim do programa
	system ("pause"); // espera o usuário apertar uma tecla
}

// apresenta o menu de comandos
void MostraMenu (void)
{
	printf ("\n\nOPCOES DO MENU:\n");
	printf ("C - Cadastrar um aluno\n");
	printf ("T - Mostrar a tabela de dados cadastrados de todos os alunos\n");
	printf ("M - Mostrar os dados cadastrados de um aluno\n");
	printf ("S - Sair do programa\n\n");
}

// lê e retorna a opção fornecida
char LeOpcaoMenu (void)
{
char op;	// opção fornecida pelo operador
	printf ("Forneca sua opcao - "); // pede a opção
	scanf ("%c", &op);	// lê a opção fornecida pelo operador
	LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
	return (op);		// retorna a opção fornecida pelo operador
}

// inicia a tabela dos dados cadastrados, deixando-a vazia
void IniciaTabAlunos (struct stAluno t[MAX_NUM_ALUNOS])
{
int k;	// contador auxiliar
	for (k = 0; k < MAX_NUM_ALUNOS; k++)	// varre toda a tabela
		t[k].nome[0] = '\0';	// coloca uma string vazia no nome, indicando posição vazia
}

// cadastra os dados de um aluno
void CadastraAluno (struct stAluno t[MAX_NUM_ALUNOS])
{
int k;	// contador auxiliar
	for (k = 0; k < MAX_NUM_ALUNOS; k++)	// varre toda a tabela
		if (t[k].nome[0] == '\0')	// verifica se a posição está vazia
		{
			// pede, obtém e armazena os dados do aluno
			printf ("\nFAZENDO CADASTRO DE ALUNO COM NUMERO %03d\n", k+1); // o cadastro é a posição + 1
			// cadastra o nome do aluno
			printf ("Forneca o nome do aluno (no maximo %d caracteres) - ", MAX_COMP_NOME);
			gets (t[k].nome); // lê o nome do aluno
			// cadastra a turma do aluno
			printf ("Forneca a turma do aluno - ");
			scanf ("%c", &t[k].turma);	// lê a turma do aluno
			LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
			// cadastra a idade do aluno
			printf ("Forneca a idade do aluno - ");
			scanf("%d", &t[k].idade);	// lê a idade do aluno
			LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
			// cadastra a média do aluno
			printf ("Forneca a media do aluno - ");
			scanf("%f", &t[k].media);	// lê a média do aluno
			LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
			return;	// se conseguiu cadastrar um aluno, retorna da função
		}
	// se chegou até aqui, é porque não achou uma posição vazia na tabela para cadastrar o aluno
	printf ("\n\nTABELA CHEIA\n\n");	// avisa tabela cheia
}

// mostra os dados cadastrados em uma posição da tabela
void MostraCadastro (struct stAluno t[MAX_NUM_ALUNOS], int num_cad)
{
	printf("Numero de cadastro e nome: %d %s\n", num_cad, t[num_cad-1].nome);	// mostra o número de cadastro e o nome do aluno
	printf("Turma do aluno: %c\n", t[num_cad-1].turma);	// mostra a turma do aluno
	printf("Idade do aluno: %d\n", t[num_cad-1].idade);	// mostra a idade do aluno
	printf("Media do aluno: %.2f\n", t[num_cad-1].media);	// mostra a média do aluno
}

// mostra os dados cadastrados de todos os alunos
void MostraTabAlunos (struct stAluno t[MAX_NUM_ALUNOS])
{
int k;	// contador auxiliar
	printf ("\nMOSTRANDO CADASTROS DE TODOS OS ALUNOS\n");
	for (k = 0; k < MAX_NUM_ALUNOS; k++)		// varre toda a tabela
		if (t[k].nome[0] != '\0')				// verifica se a posição está ocupada
			MostraCadastro (t, k+1);	// mostra os dados dessa posição
	// quando chega aqui, é porque está no fim da tabela
	printf ("\nFIM DOS CADASTROS DE TODOS OS ALUNOS\n");
}

// mostra os dados cadastrados de um aluno (pede o número do cadastro do aluno)
void MostraAluno (struct stAluno t[MAX_NUM_ALUNOS])
{
int num_cad;	// número de cadastro do aluno
	while (1)	// permanece num laço até o usuário fornecer um número válido
	{
		printf ("\nForneca o numero de cadastro do aluno - "); // pede o número de cadastro do aluno
		scanf ("%d", &num_cad);	// lê o número fornecido pelo usuário
		LimpaEntrada ();	// limpa "buffer" do teclado (usou "scanf")
		if ((num_cad < 1) || (num_cad > MAX_NUM_ALUNOS))
					// verifica se o número não é válido
			printf ("NUMERO FORNECIDO %03d INVALIDO\n\n", num_cad); // avisa número inválido
		else		// se o número é válido
			break;	// sai do laço
	}
	if(t[MAX_NUM_ALUNOS].nome[0] != '\0')	// verifica se a posição está ocupada
		MostraCadastro (t, num_cad);	// mostra o cadastro dessa posição
	else	// se a posição está vazia
		printf ("CADASTRO %03d INEXISTENTE\n\n", num_cad);	// avisa que o cadastro ainda não foi feito
}

// limpa o "buffer" de entrada pelo teclado
// deve ser utilizada quando usa "scanf"
void LimpaEntrada (void)
{
char carac;
	// "receita de bolo"
	while ((carac = fgetc(stdin)) != EOF && carac != '\n')
		;
}
