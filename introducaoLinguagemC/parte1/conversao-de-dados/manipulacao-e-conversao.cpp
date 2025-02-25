#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; //nesse exemplo, será forçado um resultado inteiro

    printf("A soma entre os dois númeoros é: %d\n", soma);
    printf("A diferença entre os dois númeoros é: %d\n", diferenca);
    printf("O produto entre os dois númeoros é: %d\n", produto);
    printf("O quociente entre os dois númeoros é: %d\n", quociente);
}