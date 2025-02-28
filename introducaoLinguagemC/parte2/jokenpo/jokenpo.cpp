#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaDoJogador;
    int escolhaDoComputador;
    srand(time(0));

    printf("***JOKENPÔ***\n");
    printf("=-=-=-=-=-=-=-=-=-=-=\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    printf("Escolha uma opção: \n");
    scanf(" %d", &escolhaDoJogador);

    escolhaDoComputador = rand() % 3 + 1;

    switch (escolhaDoJogador)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolhaDoComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaDoComputador == escolhaDoJogador)
    {
        printf("###EMPATE###");
    } else if ((escolhaDoJogador == 1) && (escolhaDoComputador == 3) ||
                (escolhaDoJogador == 2) && (escolhaDoComputador == 1) ||
                (escolhaDoJogador == 3) && (escolhaDoComputador ==2))
    {
        printf("Parabéns, vc Ganhou!");
    } else {
        printf("Não foi dessa vez!");
    }
    
    
}