#include <stdio.h>

// void moverDireita(){
//     printf("direita\n");
// }

// void moverEsquerda(){
//     printf("esquerda\n");
// }


// int main(){
//     int usuario;


//     printf("1. mover para a direita\n");
//     printf("2. mover para a esquerda\n");
//     printf("Escolha uma opção: \n");
//     scanf(" %d", &usuario);

//     switch (usuario)
//     {
//     case 1:
//         moverDireita();
//         break;
    
//     case 2:
//         moverEsquerda();
//         break;
    
//     default:
//         break;
//     }
    
// }

int main(){
    int num, ind, soma=0;

    for (ind = 1; ind <= 5; ind++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            soma=soma+num;
        }
        printf("%d", soma);
    }
    
}