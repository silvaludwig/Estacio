#include <stdio.h>

int main(){

    int index;

    char *notasAlunos[3][3]{
        {"Aluno 0", "Pt: 30", "Mat: 60"},
        {"Aluno 1", "Pt: 80", "Mat: 20"},
        {"Aluno 2", "Pt: 50", "Mat: 70"}
    };

    printf("Digite o número do aluno que deseja ver as notas.\n");
    printf("0. Aluno 0 \t 1. Aluno 1 \t 2. Aluno 2 \n");
    scanf("%d", &index);

    printf("As notas do %s são %s e %s", notasAlunos[index][0], notasAlunos[index][1], notasAlunos[index][2]);

    return 0;
}