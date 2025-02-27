#include <stdio.h>

int main(){
    int variavelControle;

    printf("Digite uma opção entre 1 e 2: \n");
    scanf(" %d", &variavelControle);

    switch (variavelControle)
    {
    case 1:
        printf("teste de condição. opção selecionada 1\n");
        break;

    case 2:
        printf("teste de condição. opção selecionada 2\n");
        break;

    default:
        printf("teste de condição. nenhuma opção válida selecionada\n");
        break;
    }
}
// é possível fazer o switch case com string tbm, basta colocar entre aspas simples a opção desejada