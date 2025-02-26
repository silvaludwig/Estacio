#include <stdio.h>

int main(){
    int idadeUsuario;

    printf("Digite sua idade: \n");
    scanf(" %d", &idadeUsuario);

    if(idadeUsuario < 12){printf("Você tem %d anos, vc é uma criança!", idadeUsuario);}
    else if(idadeUsuario > 12 && idadeUsuario < 18){printf("Você tem %d anos, um adolescente", idadeUsuario);}
    else if(idadeUsuario >= 18){printf("Vc tem %d anos, já é uma pessoa adulta", idadeUsuario);}
}