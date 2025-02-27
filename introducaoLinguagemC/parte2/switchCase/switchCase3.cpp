/*O objetivo é criar o mesmo programa usando switch-case e if-else
pra ver a diferença dos dois. O programa deve solicitar ao usuário 
que escolha uma opção entre 7 pra imprimir o dia da semana.*/

#include <stdio.h>

int main(){
    int escolha;

    printf("Escolha uma opção entre um e sete: \n");
    scanf(" %d", &escolha);

    if (escolha == 1){
        printf("Opção 1, domingo\n");
    } else if (escolha == 2){
        printf("Opção 2, segunda\n");
    } else if (escolha == 3){
        printf("Opção 3, terça\n");
    } else if (escolha == 4){
        printf("Opção 4, quarta\n");
    } else if (escolha == 5){
        printf("Opção 5, quinta\n");
    } else if (escolha == 6){
        printf("Opção 6, sexta\n");
    } else if (escolha == 7){
        printf("Opção 7, sábado\n");
    } else
        printf("Opção inválida\n");
}