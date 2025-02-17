#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod1[50], cod2[50], cod3[50], cod4[50];
    char nome1[50], nome2[50], nome3[50], nome4[50];
    float pop1, pop2, pop3, pop4;
    int tur1, tur2, tur3, tur4;
    float area1, area2, area3, area4, pib1, pib2, pib3, pib4;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código da primeira carta de cidade: ");
    scanf("%s", &cod1);
    printf("Insira o nome da cidade para a carta de código %s: ",cod1);
    scanf("%s", &nome1);
    printf("Insira a população da cidade (%s): ", nome1);
    scanf("%f", &pop1);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome1);
    scanf("%f", &area1);
    printf("Insira o PIB (em bilhões de R$) da cidade (%s): ", nome1);
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome1);
    scanf("%d", &tur1);

    printf("Insira o código da segunda carta de cidade: ");
    scanf("%s", &cod2);
    printf("Insira o nome da cidade para a carta de código %s: ",cod2);
    scanf("%s", &nome2);
    printf("Insira a população da cidade (%s): ", nome2);
    scanf("%f", &pop2);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome2);
    scanf("%f", &area2);
    printf("Insira o PIB (em bilhões de R$) da cidade (%s): ", nome2);
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome2);
    scanf("%d", &tur2);

    printf("Insira o código da terceira carta de cidade: ");
    scanf("%s", &cod3);
    printf("Insira o nome da cidade para a carta de código %s: ",cod3);
    scanf("%s", &nome3);
    printf("Insira a população da cidade (%s): ", nome3);
    scanf("%f", &pop3);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome3);
    scanf("%f", &area3);
    printf("Insira o PIB (em bilhões de R$) da cidade (%s): ", nome3);
    scanf("%f", &pib3);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome3);
    scanf("%d", &tur3);

    printf("Insira o código da quarta carta de cidade: ");
    scanf("%s", &cod4);
    printf("Insira o nome da cidade para a carta de código %s: ",cod4);
    scanf("%s", &nome4);
    printf("Insira a população da cidade (%s): ", nome4);
    scanf("%f", &pop4);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome4);
    scanf("%f", &area4);
    printf("Insira o PIB (em bilhões de R$) da cidade (%s): ", nome4);
    scanf("%f", &pib4);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome4);
    scanf("%d", &tur4);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("\nFICHAS DAS CARTAS:\n");

    printf("Código: %s\nCidade: %s\nPopulação: %.2f milhões de habitantes\n", cod1, nome1, pop1/1000000);
    printf("Área: %.1f km²\nPIB: R$ %.1f bilhões\nPontos turísticos: %d\n", area1, pib1, tur1);
    printf("Densidade populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n", pop1/area1, (pib1*1000000000)/pop1);

    printf("Código: %s\nCidade: %s\nPopulação: %.2f milhões de habitantes\n", cod2, nome2, pop2/1000000);
    printf("Área: %.1f km²\nPIB: R$ %.1f bilhões\nPontos turísticos: %d\n", area2, pib2, tur2);
    printf("Densidade populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n", pop2/area2, (pib2*1000000000)/pop2);

    printf("Código: %s\nCidade: %s\nPopulação: %.2f milhões de habitantes\n", cod3, nome3, pop3/1000000);
    printf("Área: %.1f km²\nPIB: R$ %.1f bilhões\nPontos turísticos: %d\n", area3, pib3, tur3);
    printf("Densidade populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n", pop3/area3, (pib3*1000000000)/pop3);

    printf("Código: %s\nCidade: %s\nPopulação: %.2f milhões de habitantes\n", cod4, nome4, pop4/1000000);
    printf("Área: %.1f km²\nPIB: R$ %.1f bilhões\nPontos turísticos: %d\n", area4, pib4, tur4);
    printf("Densidade populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n", pop4/area4, (pib4*1000000000)/pop4);

    return 0;
}
