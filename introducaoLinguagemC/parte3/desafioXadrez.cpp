#include <stdio.h>

/*
A ideia é criar um programa que simule a movimentação das peças de xadrez.
Eu tentei usar cada uma das estruturas de repetição, uma pra cada peça. 
Porém não consegui fazer funcionar ainda. Deixei comentado os códigos pra que,
no futuro, eu possa refazer e reaproveitar quando souber como corrigir.

Falando do que ficou pronto: 
- o programa tem um menu que coleta a opção do usuário sobre qual peça o mesmo
gostaria de movimentar. Por enquanto as peças tem movimentos pre-definidos, 
conforme foi solicitado no exercício. Mas a ideia é que, nas próximas versões, 
o próprio usuário possa escolhar a direção e a quantidade de casas movimentadas. 

Na movimentação do cavalo eu copiei a do professor, porém só depois de tentar fazer.
Tentei usar um for aninhado a outro for e não consegui fazer funcionar ainda. 
Uma hora a saída ficou DIREITA CIMA CIMA, outra ficou DIREITA CIMA DIREITA CIMA kkkkkk
*/

int main(){

    int escolhaUsuario;
    int movimentoCompleto = 1;

    printf("movimentando peças de xadrez\n");
    printf("por enquanto as peças tem movimentos pre-definidos\n");
    printf("mas em breve isso vai ser melhorado\n");
    printf("Peças disponíveis: \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    printf("4. Cavalo \n");
    printf("Qual peça vc quer mover? \n");
    scanf(" %d", &escolhaUsuario);

    switch (escolhaUsuario)
    {
        case 1:
            printf("vc escolheu a Torre, ela anda 5 casas pra direita");
            for (int i = 1; i <= 5; i++)
            {
                printf("Direita\n");
            }
            break;
        
        case 2:
            // int b = 1;
            printf("vc escolheu o Bipo, ele se move na diagonal\n");
            printf("nesse caso ele vai pra diagonal superior a direita\n");
            for (int i = 1; i <= 5; i++)
            {
                printf("direita e pra cima\n");
            }
            
            // do
            // {
            //     printf("direita e pra cima");
            //     b++;
            // } while (b <= 5);
            break;

        case 3:
            // int a = 1;
            printf("vc escolheu a Rainha, ela pode se mover em todas as direções\n");
            printf("nesse exercício ela se move 8 casas para a esquerda\n");

            for (int i = 1; i <= 8; i++)
            {
                printf("esquerda\n");
            }
            

            // while (a <= 8)
            // {
            //     printf("esquerda");
            //     a++;
            // }
            break;
        
        case 4:
            printf("vc escolheu o Cavalo, ele se movimenta em L\n");
            printf("nesse exercício ele se moverá pra cima duas vezes e uma vez pra direita\n");

            while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cima\n");
                    }
                    printf("Direita\n");
                }
            

            // for (int i = 0; i < 2; i++)
            // {
            //     printf("Pra cima\n");
            //     for (int j = 0; j < 1; j++)
            //     {
            //         printf("Direita\n");
            //     }               
            // }
            break;
                    
        default:
            printf("nenhuma opção válida");
            break;
        
    }


    
}