#include <stdio.h>
//entrada de dados OK
int main(){
    char estado, codigoCarta, nomeCidade;
    int populacao, pontosTuristicos;
    float area, pib;

    printf("Digite o estado: \n");
    scanf(" %s", &estado);

    printf("Digite o código da carta: \n");
    scanf(" %s", &codigoCarta);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &nomeCidade);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos);

    printf("Digite a area: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    float densidadePopulacional = populacao / area;
    printf("Densidade populacional: %.2f\n", densidadePopulacional);

    float pibPerCapita = pib / populacao;
    printf("Densidade populacional: %.2f\n", pibPerCapita);

}