#include <stdio.h>

int main(){
    int opcao;

    printf("***MENU PRINCIPAL***\n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Ver Regras do Jogo\n");
    printf("3. Sair do Jogo\n");
    printf("Escolha uma opção: \n");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Execução do Jogo\n");
        break;
    case 2:
        printf("Regras do Jogo\n");
        break;
    case 3:
        printf("Saindo do Jogo\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

}