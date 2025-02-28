#include <stdio.h>
//entrada de dados OK
int main(){
    char estado, estado2, codigoCarta, codigoCarta2, nomeCidade, nomeCidade2;
    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    int escolhaMenu;
    float area, area2, pib, pib2;

// PRIMEIRA CARTA    
    printf("***BEM VINDO AO JOGO SUPERTRUNFO!***\n");
    printf("Cadastre a primeira carta!\n");
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
    printf("PIB per capita: %.2f\n", pibPerCapita);

// SEGUNDA CARTA    
    printf("Cadastre a segunda carta!\n");
    printf("Digite o estado: \n");
    scanf(" %s", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", &codigoCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos2);

    printf("Digite a area: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    float densidadePopulacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);

    float pibPerCapita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // printf("Vamos comparar o atributo População das duas cartas Inseridas!\n");
    // printf("A primeira carta tem uma população de %d Habitantes, enquanto que a segunda carta tem %d habitantes. \n", populacao, populacao2);
    
    // if(populacao > populacao2){
    //     printf("A carta vencedora é a primeira");
    // } else {
    //     printf("A Carta vencedora é a segunda");
    // }



    printf("Escolha qual atributo vc quer comparar: \n");
    printf("1. População  \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Densidade Demográfica \n");
    scanf(" %d", escolhaMenu);

    switch (escolhaMenu)
    {
        case 1:
            printf("Atributo escolhido: População\n");
            break;
        case 2:
            printf("Atributo escolhido: Área\n");
            break;
        case 3:
            printf("Atributo escolhido: PIB\n");
            break;
        case 4: 
            printf("Densidade Demográfica\n");
            break;    
        default:
            printf("Opção Inválida!");
            break;
    }

    if ((populacao > populacao2) || (area > area2) || (pib > pib2) || (densidadePopulacional < densidadePopulacional2))
    {
        printf("Carta 1 VENCEU");
    } else {
        printf("Carta 2 VENCEU");
    }
    

}