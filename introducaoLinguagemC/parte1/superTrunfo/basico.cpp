#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nomeCidade[20];
    int codigo_cidade, populacao, pontos_turisticos;
    float area, pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade: \n"); //imprime uma instrução ao usuário pra inserir o nome da cidade
    scanf(" %s", &nomeCidade); //coleta o dado do usuário e atribui à variavel

    printf("Insira o código da cidade: \n"); //solicita o código da cidade
    scanf(" %d", &codigo_cidade); //coleta o dado do usuário e atribui à variavel   

    printf("Insira a população: \n"); //solicita o dado população
    scanf(" %d", &populacao); //coleta o dado do usuário e atribui à variavel

    printf("Insira o número de pontos turísticos: \n"); //solicita o número de pontos turísicos
    scanf(" %d", &pontos_turisticos); //coleta o dado do usuário e atribui à variavel

    printf("Insira a área da cidade: \n"); //solicita a área total da cidade
    scanf(" %f", &area); //coleta o dado do usuário e atribui à variavel

    printf("Insira o PIB da cidade: \n"); //solicita informação do PIB da cidade
    scanf(" %f", &pib); //coleta o dado do usuário e atribui à variavel

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome da cidade: %s \n População: %d \n Número de pontos turísticos: %d \n Área total: %f \n", nomeCidade, populacao, pontos_turisticos, area);
    printf("Código da cidade: %d \n PIB: %f", codigo_cidade, pib);

    return 0;
}
