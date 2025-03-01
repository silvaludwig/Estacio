#include <stdio.h>

int main(){

    int numero, i;

    printf("Digite um número pra calcular a tabuada..."); //solicita ao usuário um número
    scanf(" %d", &numero); //coleta e armazena o número na variável numero

    for (i = 0; i <= 10; i++) //estrutura básica for contendo a inicialização, condição e incremento
    {
        printf("%d x %d = %d\n", i, numero, i * numero); //imprimindo a tabuada
    }
    
    return 0;
}