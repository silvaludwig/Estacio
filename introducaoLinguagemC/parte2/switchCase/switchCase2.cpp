#include <stdio.h>
/*Tentei fazer um programa um pouco mais complexo do que foi pedido na aula, 
mas ainda me faltam conhecimentos pra fazer funcionar do jeito que eu quero, kkk
Enfim... aqui até que tá funcionando sim, mas eu não consegui armazenar as informações 
nas variáveis e exibi-las de novo. Acredito que seja um problema de sintaxe. 
Mais pra frente eu volto aqui pra corrigir. Pelo menos o Ludwig do futuro vai ter
uma boa parte do programa já feito. kkkk*/

int main(){
    int opcao;
    float saldo = 100.00, saque, deposito, novoSaldo;

    printf("Escolha uma opção:\n");
    printf("1. Verificar Saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer Saque\n");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu Saldo é R$%d", saldo);
        break;
    case 2:
        printf("Qual valor gostaria de depositar?\n");
        scanf(" %f", deposito);
        novoSaldo = saldo + deposito;
        printf("Depósito feito com sucesso!\n");
        printf("Seu novo saldo é de R$%.2f\n", novoSaldo);
        break;
    case 3:
        printf("Qual valor gostaria de sacar?\n");
        scanf(" %f", saque);
        novoSaldo = saldo - saque;
        printf("Saque feito com sucesso!\n");
        printf("Seu novo saldo é de R$%.2f\n", novoSaldo);
        break;
    default:
        printf("Nenhuma opção válida!");
        break;
    }
}