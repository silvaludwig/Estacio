#include <stdio.h>
#include <stdbool.h>

// Tamanho do tabuleiro
#define TAMANHO 10
// Tamanho dos navios
#define TAMANHO_NAVIO 3
// Representação da água
#define AGUA 0
// Representação do navio
#define NAVIO 3

// Função para inicializar o tabuleiro com água
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para verificar se a posição do navio é válida
bool posicaoValida(int linha, int coluna, bool vertical, int tabuleiro[TAMANHO][TAMANHO])
{
    // Verifica se o navio cabe no tabuleiro
    if (vertical)
    {
        if (linha + TAMANHO_NAVIO > TAMANHO)
            return false;
    }
    else
    {
        if (coluna + TAMANHO_NAVIO > TAMANHO)
            return false;
    }

    // Verifica se as posições estão livres
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        if (vertical)
        {
            if (tabuleiro[linha + i][coluna] != AGUA)
                return false;
        }
        else
        {
            if (tabuleiro[linha][coluna + i] != AGUA)
                return false;
        }
    }

    return true;
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, bool vertical)
{
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        if (vertical)
        {
            tabuleiro[linha + i][coluna] = NAVIO;
        }
        else
        {
            tabuleiro[linha][coluna + i] = NAVIO;
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO])
{
    printf("Tabuleiro de Batalha Naval:\n");
    printf("  0 1 2 3 4 5 6 7 8 9\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Declaração do tabuleiro
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro com água
    inicializarTabuleiro(tabuleiro);

    // Posicionamento do navio horizontal (linha 2, coluna 3)
    int linha_h = 2, coluna_h = 3;
    if (posicaoValida(linha_h, coluna_h, false, tabuleiro))
    {
        posicionarNavio(tabuleiro, linha_h, coluna_h, false);
    }
    else
    {
        printf("Posição inválida para o navio horizontal!\n");
        return 1;
    }

    // Posicionamento do navio vertical (linha 5, coluna 7)
    int linha_v = 5, coluna_v = 7;
    if (posicaoValida(linha_v, coluna_v, true, tabuleiro))
    {
        posicionarNavio(tabuleiro, linha_v, coluna_v, true);
    }
    else
    {
        printf("Posição inválida para o navio vertical!\n");
        return 1;
    }

    // Exibe o tabuleiro com os navios posicionados
    exibirTabuleiro(tabuleiro);

    return 0;
}