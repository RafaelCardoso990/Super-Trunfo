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

int main() {
    // Declaração de variáveis das Cartas
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacaoCarta1, populacaoCarta2; 
    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;

    // Entrada de dados para a Carta 1

    printf("Carta 1:\n");

    printf("Digite o estado da Carta 1 (A-H): \n");
    scanf(" %c", &estadoCarta1);
    
    printf("Digite o código da Carta 1 (01-04): \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Área da cidade em KM^2: \n");
    scanf("%f", &areaCarta1);


    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibCarta1);


    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosCarta1);

    // Entrada de dados para a Carta 2

    printf("Carta 2:\n");

    printf("Digite o estado da Carta 2 (A-H): \n");
    scanf(" %c", &estadoCarta2);
    
    printf("Digite o código da Carta 2 (01-04): \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Área da cidade em KM^2: \n");
    scanf("%f", &areaCarta2);


    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibCarta2);


    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosCarta2);

    // Visualização dos dados da Carta 1

    printf("\nDados da Carta 1: \n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código da Carta: %c%s\n", estadoCarta1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);    
    printf("Área: %.2f km²\n", areaCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Pontos Turísticos: %d\n", pontosTuristicosCarta1);

    // Visualização dos dados da Carta 2
    
    printf("\nDados da Carta 2: \n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código da Carta: %c%s\n", estadoCarta2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);    
    printf("Área: %.2f km²\n", areaCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Pontos Turísticos: %d\n", pontosTuristicosCarta2);

    return 0;
}