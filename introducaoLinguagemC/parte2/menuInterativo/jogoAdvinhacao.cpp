#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("***MENU PRINCIPAL***\n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Ver Regras do Jogo\n");
    printf("3. Sair do Jogo\n");
    printf("Escolha uma opção: \n");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: \n");
        scanf(" %d", &palpite);
        if (numeroSecreto == palpite)
        {
            printf("Acertou mizerável!\n");
            printf("O número Secreto tbm era: %d\n", numeroSecreto);
        } else {
            printf("Nananinanão!\n");
            printf("O número Secreto era: %d\n", numeroSecreto);
        } break;

    case 2:
        printf("Você vai escolher um número.\n");
        printf("Se for o mesmo que a máquina escolheu, vc ganha. Se não, não. \n");
        break;
    case 3:
        printf("Saindo do Jogo\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

}