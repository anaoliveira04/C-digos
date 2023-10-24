/*
DOM_ALGH_Model.cpp
DOM-ALGH - Projeto Domino
31/08/2023
Grupo: ALGH
Ana Clara Oliveira Silva, Guilherme Schnekenberg Teixeira, Helio Masaru Sueta, Lorena Gaiotti
*/

#include "Dom_ALGH_Model.h"


typedef struct stpedra //estrutura das pedras
{
	int L1, L2;
	char status;
} tipoPedra; //o "tipoPedra" abrevia o struct stpedra

/*Existem 4 status para uma pedra de domino:
0 - pedra nao pertence a nenhum jogador, esta no monte
1 - pedra pertence ao jogador 1
2 - pedra pertence ao jogador 2
9 - pedra ja' foi jogada e esta na mesa
*/

tipoPedra dom[28]; //array de pedras
tipoPedra aux; //variavel auxiliar utilizada para embaralhar

struct Mesa { //estrutura da mesa
	int ladoE;
	int ladoD;
} mesa[28];


struct Jogo{
 int qtmesaJogo; //quantidade de pedras na mesa
 int jvezJogo; //jogador atual
 int jogadorComp; //2 = o computador e' o jogador 2
 int mesaDJogo; //extremidade direita da mesa
 int mesaEJogo; //extremidade esquerda da mesa
} sitJogo; //situacao do jogo


