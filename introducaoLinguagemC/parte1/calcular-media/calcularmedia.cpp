#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("*** PROGRAMA DE CALCULO DE MEDIA ***\n");

    printf("Insira a primeira nota: \n");
    scanf(" %f", &nota1);

    printf("Insira a segunda nota: \n");
    scanf(" %f", &nota2);

    printf("Insira a terceira nota: \n");
    scanf(" %f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.1f\n", media);

}