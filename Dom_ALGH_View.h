/*
DOM_ALGH_View.h
DOM-ALGH - Projeto Domino
31/08/2023
Grupo: ALGH
Ana Clara Oliveira Silva, Guilherme Schnekenberg Teixeira, Helio Masaru Sueta, Lorena Gaiotti
*/

void funcMostraDomino();
int menugeral();
void apresentaPedra(int jvez); //mostra as pedras de determinado jogador
int submenuV(); //exibe na tela as op��es do submenuC e capta a op��o escolhida
char escolhePedra(); //capta a op��o de pedra que o usuario escolher
char escolheLado(); //capta a op��o de pedra que o usu�rio escolher
void apresentaMensagem(char mens[100]); //apresenta uma determinada mensagem na tela
void flush_in(); //limpa o buffer de entrada
void mostraRegras(); //mostra as regras
void mostraUltimaPedra(); //mostra a ultima pedra que foi colocada na mesa
