/*O objetivo é criar o mesmo programa usando switch-case e if-else
pra ver a diferença dos dois. O programa deve solicitar ao usuário 
que escolha uma opção entre 7 pra imprimir o dia da semana.*/

#include <stdio.h>

int main(){
    int escolha;

    printf("Escolha uma opção entre um e sete: \n");
    scanf(" %d", &escolha);

    switch (escolha){
        case 1:
            printf("Opção 1, domingo\n");
            break;

        case 2:
            printf("Opção 2, segunda\n");
            break;

        case 3:
            printf("Opção 3, terça\n");
            break;

        case 4:
            printf("Opção 4, quarta\n");
            break;

        case 5:
            printf("Opção 5, quinta\n");
            break;

        case 6:
            printf("Opção 6, sexta\n");
            break;

        case 7:
            printf("Opção 7, sábado\n");
            break;

        default:
            printf("Opção Inválida");
    }
}