//ACOS13 - divisão da herança
//Ana Clara Oliveira Silva - 23/03/2023

#include <stdio.h> // declarações das funções da biblioteca de E/S padrão
#include <stdlib.h> // declarações das funções da biblioteca padrão

// PROBLEMA 13 - O programa solicita ao usuário um valor de herança a ser partilhado,
//				a taxa percentual do imposto a ser pago
//				e o número de herdeiros que vão partilhar a herança.
//				O programa deve avisar o fornecimento indevido de dados:
//				- valor de herança negativo
//				- taxa de imposto negativa ou maior que 100
//				- número de herdeiros negativo ou igual a zero
//				Se todos os dados forem consistentes, o programa deve indicar:
//				- o valor do imposto pago
//				- o valor que cada herdeiro recebeu

main()
{
	// declarações das variáveis do programa
float val_tot; // valor total da herança, fornecido pelo usuário
float taxa; // taxa percentual do imposto, fornecida pelo usuário
int num_herd; // número de herdeiros, fornecido pelo usuário
float val_imp; // valor do imposto pago
float val_herd; // valor recebido por cada herdeiro

	// obtenção dos dados iniciais

	// pede ao usuário o valor da herança
	printf ("Forneca o valor total da heranca - ");
	// obtém o valor da herança fornecido pelo usuário
	scanf ("%f", &val_tot);
	// apresenta o valor da herança fornecido pelo usuário
	printf ("O valor total da heranca fornecido foi %.2f\n", val_tot);
	
		// pede ao usuário a taxa de imposto
	printf ("Forneca a taxa de imposto - ");
	// obtém a taxa de imposto fornecida pelo usuário
	scanf ("%f", &taxa);
	// apresenta a taxa de imposto fornecida pelo usuário
	printf ("A taxa de imposto fornecida foi %.2f\n", taxa);
	
	// pede ao usuário o número de herdeiros
	printf ("Forneca o numero de herdeiros - ");
	// obtém a taxa de imposto fornecida pelo usuário
	scanf ("%d", &num_herd);
	// apresenta o número de herdeiros fornecido pelo usuário
	printf ("O numero de herdeiros fornecido foi %d\n", num_herd);
	printf ("\n"); // pula uma linha
	
		// testes de consistência
	if (val_tot < 0) // valor total de heranca negativo
		printf ("VALOR TOTAL DA HERANCA FORNECIDO INVALIDO!\n");
	else if ((taxa < 0)	|| (taxa > 100)) // taxa negativa ou (||) > 100
		printf ("TAXA PERCENTUAL FORNECIDA INVALIDA!\n");
	else if (num_herd <= 0) // número de herdeiros negativo
		printf ("NUMERO DE HERDEIROS FORNECIDO INVALIDO!\n");
	else // se chegou até aqui, é porque os dados fornecidos são válidos
	{
		// cálculos
		val_imp = val_tot * taxa / 100.0; // calcula o imposto
		printf ("O VALOR DO IMPOSTO A SER PAGO E' %.2f\n", val_imp); // mostra o imposto
		val_herd = (val_tot - val_imp) / num_herd; // calcula o valor de cada herdeiro
		printf ("O VALOR DA HERANCA DE CADA HERDEIRO E' %.2f\n", val_herd); // mostra o valor de cada herdeiro
	}
		system ("pause"); // espera o usuário apertar uma tecla
}