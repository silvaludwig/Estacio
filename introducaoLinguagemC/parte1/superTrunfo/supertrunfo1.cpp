#include <stdio.h>

int main(){
//Declaração das variáveis
    char estado;
    char codigoCarta[10];
    char nomeCidade[20];
    int populacao;
    float areaTotal;
    float pib;
    int pontosTuristicos;

//Entrada dos dados
//-Carta 01:
    printf("Bem vindo ao jogo SuperTrunfo!\n");
    printf("Vamos começar inserindo os dados da primera carta.\n");
    
    printf("Qual o Estado? \n");
    scanf(" %s", &estado);
    printf("Estado: %s\n", estado);
    
    printf("Qual o Código da Carta? \n");
    scanf(" %s", &codigoCarta);
    printf("Código da Carta: %s\n", codigoCarta);

    printf("Qual o Nome da Cidade? \n");
    scanf("%s", &nomeCidade);
    printf("Código da Carta: %s\n", nomeCidade);

    printf("Qual a população? \n");
    scanf("%d", &populacao);
    printf("Código da Carta: %d\n", populacao);

    printf("Qual a área total? \n");
    scanf("%.2f", &areaTotal);
    printf("Código da Carta: %.2f\n", areaTotal);

    printf("Qual o PIB? \n");
    scanf("%.2f", &pib);
    printf("Código da Carta: %.2f\n", pib);

    printf("Quantos Pontos Turísticos? \n");
    scanf("%d", &pontosTuristicos);
    printf("Código da Carta: %d\n", pontosTuristicos);

    printf("Carta 1 Cadastrada com sucesso!\n");





    return 0;
}