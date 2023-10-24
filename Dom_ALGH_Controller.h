/*
DOM_ALGH_Controller.h
DOM-ALGH - Projeto Domino
31/08/2023
Grupo: ALGH
Ana Clara Oliveira Silva, Guilherme Schnekenberg Teixeira, HHelio Masaru Sueta, Lorena Gaiotti
*/

void IniciarPedras();
void executarMenu();
void funcEmbaralhaPedras(); //embaralha as pedras
void iniciarJogo(); // inicia o jogo: embaralha e distribui as pedras, e faz o primeiro lance automatico
void Jogo(); //loop em que as rodadas acontecem
void primeiroLance(); //define o primeiro jogador e realiza o primeiro lance automaticamente
int jogar(int jvez);
void submenuC(); //menu de opcoes que o usuario pode escolher durante a partida
void executaJogada(); //descobre onde estao a pedra que o jogador escolheu e executa a jogada
void carregaMesaE(int k); //executa a jogada no lado edquerdo do tabuleiro
void carregaMesaD(int k); //executa a jogada no lado direito do tabuleiro
void comprarPedra(int jvez); //compra as pedras e coloca na mao do usuario
int VerificaPedra(int k); //verifica se a pedra e' valida para ser jogada
void trocaJogador(); //troca de jogador
int pedraIgualMesa(int k); //e' verdadeira se tiver mais de um lado da mesa possivel para realizar a jogada
int descobreLadoMesa(int k); //descobre em qual lado a pedra valida devera ser colocada
int passarVez(); //passa a vez se o deposito de pedras estiver vazio
int vencedor(); //descobre o vencedor
void resetar(); //reseta o jogo
void gravaCadastro(); //salva o cadastro do jogo
void recuperarCadastro(); //recupera o jogo
int CompEscolhePedra(); //computador escolhe pedra

