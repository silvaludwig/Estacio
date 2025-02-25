#include <stdio.h>

int main(){
    /*
    soma (+)
    subtração (-)
    multiplicação (*)
    divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, divisao, multiplicacao;

    printf("Entre com o primeiro número: \n");
    scanf(" %d", &numero1);
    printf("Entre com o segundo número: \n");
    scanf(" %d", &numero2);

    soma = numero1 + numero2; //soma dois números
    subtracao = numero1 - numero2; //subtrai um número do outro
    divisao = numero1 / numero2; //divide um número pelo outro
    multiplicacao = numero1 * numero2; //multiplica um numero pelo outro

    printf("A Soma dos números inseridos é: %d\n" , soma);
    printf("A Subtração dos números inseridos é: %d\n", subtracao);
    printf("A Divisão dos números inseridos é: %d\n", divisao);
    printf("A Multiplicação dos números inseridos é: %d\n", multiplicacao);

}