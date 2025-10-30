#include <stdio.h>

//Setando as variaveis que utilizaremos para o funcionamento do programa 
int main(){
    char estado;
    char estado2;
    char codigo [4], codigo2 [4], cidade [30], cidade2 [30];
    int populacao, populacao2, pontos, pontos2; 
    float area, area2, pib, pib2;
//VARIAVEIS DE DENSIDADE E PIB PER CAPITA
    float densidade1, densidade2;
    float capita1, capita2;

//Instruindo o usúario a digitar as informações das cartas e armazenando em variaveis
    printf("Qual estado da primeira carta:\n");
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
    scanf(" %d", &pontos);
    printf("Qual o número de pontos turisticos da segunda cidade: \n");
    scanf(" %d", &pontos2);

    //CALCULANDO DENSIDADE E PIB PER CAPITA
    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;
    capita1 = (pib * 1000000000) / populacao;
    capita2 = (pib2 * 1000000000) / populacao2;

    //Informações carta 1
    printf("----CARTA 1----\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area );
    printf("Pib: %.2f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %d \n", pontos);
    printf("A densidade é: %.2f hab/km²\n", densidade1);
    printf("O PIB per Capita é: %.2f reais\n", capita1);
    
    //Informações carta 2
    printf("----CARTA 2----\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("Pib: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontos2);
    printf("A densidade populacional é: %.2f hab/km² \n", densidade2);
    printf("O PIB per Capita é: %.2f reais \n", capita2);
    
    
return 0;
}