#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char estado2;
    char codigo [30], codigo2 [30], cidade [30], cidade2 [30];
    int populacao, populacao2; 
    float area, area2, pib, pib2, pontos, pontos2;
  // Área para entrada de dados
    printf("Qual estado da primeira carta: \n");
    scanf(" %c", &estado);
    printf("Qual estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Qual o codigo da primeira carta: \n");
    scanf(" %s", codigo);
    printf("Qual o codigo da segunda carta: \n");
    scanf(" %s", codigo2);

    printf("Qual o nome da cidade da primeira carta: \n");
    scanf(" %s", cidade);
    printf("Qual o nome da cidade da segunda carta: \n");
    scanf(" %s", cidade2);

    printf("Qual a população da primeira carta: \n");
    scanf(" %d", &populacao);
    printf("Qual a população da segunda carta: \n");
    scanf(" %d", &populacao2);

    printf("Qual a área da cidade da primeira carta: \n");
    scanf(" %f", &area);
    printf("Qual área da cidade da segunda carta: \n");
    scanf(" %f", &area2);

    printf("Qual o pib da primeira cidade: \n");
    scanf(" %f", &pib);
    printf("Qual o pib da segunda cidade: \n");
    scanf(" %f", &pib2);

    printf("Qual o número de pontos turisticos da primeira cidade: \n");
    scanf(" %f", &pontos);
    printf("Qual o número de pontos turisticos da segunda cidade: \n");
    scanf(" %f", &pontos2);

  // Área para exibição dos dados da cidade
     //Informações carta 1
    printf("----CARTA 1----\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %2.f km² \n", area );
    printf("Pib: %2.f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %2.f \n", pontos);

    //Informações carta 2
    printf("----CARTA 2----\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %2.f km² \n", area2);
    printf("Pib: %2.f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %2.f \n", pontos2);

return 0;
} 
