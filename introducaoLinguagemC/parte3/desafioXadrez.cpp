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

Atualização de código: 
Agora eu consegui fazer do jeito que eu queria desde o início, rsrs
O programa é todo responsivo, o usuário pode escolher qual peça quer usar,
quantas casas mover e até pra qual direção. 

Utilizei funções recursivas, switch/case (inclusive aninhados), tem for, tem While... 
Escrevi todas as linhas, sem copiar ou buscar em IA. Não que seja demérito, só que eu 
mesmo quis fazer tudo pra aprender mesmo. 

Tentei deixar o código o mais organizado possível dentro do que eu tenho de 
condições e habilidades no momento. Não vou comentar cada linha como fiz em outros
projetos pq são muitas linhas, kkkk. 

Pra ficar 100% do jeito que eu gostaria que fosse, o programa só falta oferecer uma opção
pro usuário escolher outra peça pra mover e/ou sair do programa. Por enquanto a aplicação 
termina com uma única tarefa. Baby steps...
*/

void moverDireita(int qtdDireita){
    if (qtdDireita > 0)
    {
        // moverDireita(qtdDireita - 1);
        printf("DIREITA\n");
        moverDireita(qtdDireita - 1);
    }
}

void moverEsquerda(int qtdEsquerda){
    if (qtdEsquerda > 0)
    {
        // moverDireita(qtdEsquerda - 1);
        printf("esquerda\n");
        moverEsquerda(qtdEsquerda - 1);
    }
}

void moverCima(int qtdCima){
    if (qtdCima > 0)
    {
        printf("cima\n");
        moverCima(qtdCima - 1);
    }
}

void moverBaixo(int qtdBaixo){
    if (qtdBaixo > 0)
    {
        printf("baixo\n");
        moverBaixo(qtdBaixo - 1);
    }
}


int main(){

    int escolhaUsuario;
    int movimentoCompleto = 1;
    int qtdCasas;
    int direcao;

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
            printf("Vc escolheu a Torre. Ela se move horizontal ou verticalmente, \n");
            printf("quantas casas vc quiser. Quantas casas vc gostaria de mover? \n");
            scanf(" %d", &qtdCasas);
            printf("Qual direção? \n1. Cima\n2. Baixo\n3. Direita\n4. Esquerda\n");
            scanf(" %d", &direcao);
            switch (direcao)
            {
            case 1:
                printf("%d casas para CIMA: \n", qtdCasas);
                moverCima(qtdCasas);
                printf("fim do movimento\n");
                break;
            
            case 2:
                printf("%d casas para BAIXO: \n", qtdCasas);
                moverBaixo(qtdCasas);
                printf("fim do movimento\n");
                break;

            case 3:
                printf("%d casas para DIREITA: \n", qtdCasas);
                moverDireita(qtdCasas);
                printf("fim do movimento\n");
                break;

            case 4:
                printf("%d casas para ESQUERDA: \n", qtdCasas);
                moverEsquerda(qtdCasas);
                printf("fim do movimento\n");
                break;
            
            default:
                printf("Opção Inválida! \n");
                break;
            }
        break;
        
        case 2:
            // int b = 1;
            printf("Vc escolheu o Bipo. Ele se move na diagonal\n");
            printf("Quantas casas vc gostaria que ele se movesse?\n");
            scanf(" %d", &qtdCasas);
            printf("Para qual diagonal?\n");
            printf("1. Superior Direita \t 2. Superior Esquerda \n");
            printf("3. Inferior Direita \t 4. Inferior Esquerda \n");
            scanf(" %d", &direcao);
            
            switch (direcao)
            {
            case 1:
                printf("%d casas para a Diagonal Superior Direita: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("direita e pra cima\n");
                }
                break;

            case 2:
                printf("%d casas para a Diagonal Superior Esquerda: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("esquerda e pra cima\n");
                }
                break;
                
            case 3:
                printf("%d casas para a Diagonal Inferior Direita: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("direita e pra baixo\n");
                }
                break;  
            
            case 4:
                printf("%d casas para a Diagonal Inferior Esquerda: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("esquerda e pra baixo\n");
                }
                break;           
            
            default:
                printf("Nenhuma opção válida\n");
                break;
            }
            break;

        case 3:
            printf("Vc escolheu a Rainha, ela pode se mover em todas as direções\n");
            printf("Quantas casas vc gostaria que ela se movesse?\n");
            scanf(" %d", &qtdCasas);
            printf("Para qual direção?\n");
            printf("1. Diagonal Superior Direita \t 2. Diagonal Superior Esquerda \n");
            printf("3. Diagonal Inferior Direita \t 4. Diagonal Inferior Esquerda \n");
            printf("5. CIMA \t 6. BAIXO \t 7. ESQUERDA \t 8. DIREITA \n");
            scanf(" %d", &direcao);

            switch (direcao)
            {
            case 1:
                printf("%d casas para a Diagonal Superior Direita: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("direita e pra cima\n");
                }
                break;

            case 2:
                printf("%d casas para a Diagonal Superior Esquerda: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("esquerda e pra cima\n");
                }
                break;
                
            case 3:
                printf("%d casas para a Diagonal Inferior Direita: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("direita e pra baixo\n");
                }
                break;  
            
            case 4:
                printf("%d casas para a Diagonal Inferior Esquerda: \n", qtdCasas);
                for (int i = 1; i <= qtdCasas; i++)
                {
                    printf("esquerda e pra baixo\n");
                }
                break;
            
            case 5:
                printf("%d casas para CIMA: \n", qtdCasas);
                moverCima(qtdCasas);
                printf("fim do movimento\n");
                break;
            
            case 6:
                printf("%d casas para BAIXO: \n", qtdCasas);
                moverBaixo(qtdCasas);
                printf("fim do movimento\n");
                break;

            case 7:
                printf("%d casas para DIREITA: \n", qtdCasas);
                moverDireita(qtdCasas);
                printf("fim do movimento\n");
                break;

            case 8:
                printf("%d casas para ESQUERDA: \n", qtdCasas);
                moverEsquerda(qtdCasas);
                printf("fim do movimento\n");
                break;


            default:
                printf("Sério que faltou opção pra vc? \n");
                break;
            }
            break;
            
        
        case 4:
            printf("Vc escolheu o Cavalo. Ele se movimenta em L nas quatro direções\n");
            printf("fazendo um total de 8 movimentos possíveis, mas sempre com a mesma quantidade\n");
            printf("de casas, sendo duas pra uma direção, uma pra outra perpendicular.\n");
            printf("Para qual direção?\n");
            printf("1. Cima e Direita \t 2. Cima e Esquerda \n");
            printf("3. Direita e Direita \t 4. Direita e Esquerda \n");
            printf("5. Esquerda e Direita \t 6. Esquerda e Esquerda \n");
            printf("7. Baixo e Direita \t 8. Baixo e Esquerda \n");
            scanf(" %d", &direcao);

            switch (direcao)
            {
            case 1:
                printf("Cima e Direita: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cima\n");
                    }
                    printf("Direita\n");
                }
                break;

            case 2:
                printf("Cima e Esquerda: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cima\n");
                    }
                    printf("Esquerda\n");
                }
            break;
                
            case 3:
                printf("Direita e Direita: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Direita\n");
                    }
                    printf("Direita\n");
                }
            break;  
            
            case 4:
                printf("Direita e Esquerda: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Direita\n");
                    }
                    printf("Esquerda\n");
                }
            break;
            
            case 5:
                printf("Esquerda e Direita: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Esquerda\n");
                    }
                    printf("Direita\n");
                }
            break;
            
            case 6:
                printf("Esquerda e Esquerda: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Esquerda\n");
                    }
                    printf("Esquerda\n");
                }
            break;

            case 7:
                printf("Baixo e Direita: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Baixo\n");
                    }
                    printf("Direita\n");
                }
            break;

            case 8:
                printf("Baixo e Esquerda: \n");
                while (movimentoCompleto--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Baixo\n");
                    }
                    printf("Esquerda\n");
                }
            break;


            default:
                printf("Sério que faltou opção pra vc? \n");
                break;
            }

            break;
        break;
                    
        default:
            printf("nenhuma opção válida");
            break;
        }
    
    
}