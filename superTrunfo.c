/*
    * Super Trunfo de Paìses um sistema para cadastrar as cartas com informações sobre as cidades.
    * Cada carta deve conter informações como nome do país, população, área, PIB e outros dados relevantes.
    * Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. 
    * Para cada carta, o usuário deverá fornecer as seguintes informações:
    
    * Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
    * Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
    * Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
    * População: O número de habitantes da cidade. Tipo: int
 
    * Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
    * PIB: O Produto Interno Bruto da cidade. Tipo: float
 
    * Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

#include <stdio.h>

// Definição da estrutura Carta
// Para melhorar organização, legibildiade e manutenção do código, foi criada uma estrutura chamada Carta.
// Essa estrutura contém todos os campos necessários para armazenar as informações de cada carta do Super Trunfo.
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

void entradaDeDados(struct Carta* carta1, struct Carta* carta2) {
    
     // Declaração de variáveis das Cartas
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacaoCarta1, populacaoCarta2; 
    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;
    float densidadePopulacionalCarta1, densidadePopulacionalCarta2;
    float pibPerCapitaCarta1, pibPerCapitaCarta2;


    // Entrada de dados para a Carta 1

    printf("Carta 1:\n");

    printf("Digite o estado da Carta 1 (A-H): \n");
    scanf(" %c", &carta1->estado);
    
    printf("Digite o código da Carta 1 (01-04): \n");
    scanf("%s", carta1->codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta1->nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &carta1->populacao);

    printf("Digite a Área da cidade em KM^2: \n");
    scanf("%f", &carta1->area);


    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1->pib);


    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &carta1->pontosTuristicos);

    // Entrada de dados para a Carta 2

    printf("Carta 2:\n");

    printf("Digite o estado da Carta 2 (A-H): \n");
    scanf(" %c", &carta2->estado);
    
    printf("Digite o código da Carta 2 (01-04): \n");
    scanf("%s", carta2->codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta2->nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &carta2->populacao);

    printf("Digite a Área da cidade em KM^2: \n");
    scanf("%f", &carta2->area);


    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2->pib);


    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &carta2->pontosTuristicos);
};

void calculaDensidadePopulacional(struct Carta* carta1, struct Carta* carta2) {
    // Cálculo da densidade populacional e PIB per capita para a Carta 1
    carta1->densidadePopulacional = (float)carta1->populacao / carta1->area;


    // Cálculo da densidade populacional e PIB per capita para a Carta 2
    carta2->densidadePopulacional = (float)carta2->populacao / carta2->area;   
};

void calculoPIBPerCapita(struct Carta* carta1, struct Carta* carta2) {
    // Cálculo do PIB per capita para a Carta 1
    carta1->pibPerCapita = carta1->pib / carta1->populacao;

    // Cálculo do PIB per capita para a Carta 2
    carta2->pibPerCapita = carta2->pib / carta2->populacao;
};

void exibicaoDeDados(struct Carta* carta1, struct Carta* carta2) {
    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1->estado);
    printf("Código: %s\n", carta1->codigo);
    printf("Nome da Cidade: %s\n", carta1->nomeCidade);
    printf("População: %d\n", carta1->populacao);
    printf("Área: %.2f km²\n", carta1->area);
    printf("PIB: %.2f\n", carta1->pib);
    printf("Pontos Turísticos: %d\n", carta1->pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta1->densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta1->pibPerCapita);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2->estado);
    printf("Código: %s\n", carta2->codigo);
    printf("Nome da Cidade: %s\n", carta2->nomeCidade);
    printf("População: %d\n", carta2->populacao);
    printf("Área: %.2f km²\n", carta2->area);
    printf("PIB: %.2f\n", carta2->pib);
    printf("Pontos Turísticos: %d\n", carta2->pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta2->densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta2->pibPerCapita);
};

int main() {
    struct Carta carta1, carta2;
    entradaDeDados(&carta1, &carta2);
    calculaDensidadePopulacional(&carta1, &carta2);
    calculoPIBPerCapita(&carta1, &carta2);
    exibicaoDeDados(&carta1, &carta2);
    //-----------------------------------------------------------------//

    // // Cálculo da densidade populacional e PIB per capita para a Carta 1

    // densidadePopulacionalCarta1 = populacaoCarta1 / areaCarta1;
    // pibPerCapitaCarta1 = pibCarta1 /  populacaoCarta1;

    //  // Cálculo da densidade populacional e PIB per capita para a Carta 2

    // densidadePopulacionalCarta2 =  populacaoCarta2 / areaCarta2;
    // pibPerCapitaCarta2 = pibCarta2 /  populacaoCarta2;

 

    return 0;
}