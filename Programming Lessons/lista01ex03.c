/*
3.Basquete de Robôs (2780 URI)
A organização da OIBR, Olimpíada Internacional de Basquete de Robô, está
começando a ter problemas com dois times: os Bit Warriors e os Byte Bulls. É que
os robôs desses times acertam quase todos os lançamentos, de qualquer posição
na quadra! Pensando bem, o jogo de basquete ficaria mesmo sem graça se
jogadores conseguissem acertar qualquer lançamento, não é mesmo? Uma das
medidas que a OIBR está implantando é uma nova pontuação para os lançamentos,
de acordo com a distância do robô para o início da quadra. A quadra tem 2000
centímetros de comprimento.
Dada a distância D do robô até o início da quadra, onde está a cesta, a regra é a
seguinte:
• Se D≤ 800, a cesta vale 1 ponto;
• Se 800 < D ≤ 1400, a cesta vale 2 pontos;
• Se 1400 < D ≤ 2000, a cesta vale 3 pontos.
A organização da OIBR precisa de ajuda para automatizar o placar do jogo. Dado o
valor da distância D, você deve escrever um programa para calcular o número de
pontos do lançamento.
*/

#include <stdio.h>
int main(){

    int d;

    printf("Informe a distância entre o robô e a cesta, em centímetros: ");
    scanf("%d", &d);

    if (d <= 800){
        printf("\nCesta de 1 ponto!\n\n");
    } else if (d <= 1400){
        printf("\nCesta de 2 pontos!\n\n");
    } else if (d <= 2000){
        printf("\nCesta de 3 pontos!\n\n");
    } else {
        printf("\nDistância inválida.\n\n");
    }

    return 0;
}