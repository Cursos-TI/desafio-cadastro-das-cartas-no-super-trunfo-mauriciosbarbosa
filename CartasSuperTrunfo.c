#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod1[10], cod2[10], cod3[10], cod4[10];
    char nome1[50], nome2[50], nome3[50], nome4[50];
    int pop1, pop2, pop3, pop4, tur1, tur2, tur3, tur4;
    float area1, area2, area3, area4, pib1, pib2, pib3, pib4;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código da primeira carta de cidade: ");
    scanf("%s", &cod1);
    printf("Insira o nome da cidade para a carta de código %s: ",cod1);
    scanf("%s", &nome1);
    printf("Insira a população da cidade (%s): ", nome1);
    scanf("%d", &pop1);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome1);
    scanf("%f", &area1);
    printf("Insira o PIB (em milhões de R$) da cidade (%s): ", nome1);
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome1);
    scanf("%f", &tur1);

    printf("Insira o código da segunda carta de cidade: ");
    scanf("%s", &cod2);
    printf("Insira o nome da cidade para a carta de código %s: ",cod2);
    scanf("%s", &nome2);
    printf("Insira a população da cidade (%s): ", nome2);
    scanf("%d", &pop2);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome2);
    scanf("%f", &area2);
    printf("Insira o PIB (em milhões de R$) da cidade (%s): ", nome2);
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome2);
    scanf("%f", &tur2);

    printf("Insira o código da terceira carta de cidade: ");
    scanf("%s", &cod3);
    printf("Insira o nome da cidade para a carta de código %s: ",cod3);
    scanf("%s", &nome3);
    printf("Insira a população da cidade (%s): ", nome3);
    scanf("%d", &pop3);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome3);
    scanf("%f", &area3);
    printf("Insira o PIB (em milhões de R$) da cidade (%s): ", nome3);
    scanf("%f", &pib3);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome3);
    scanf("%f", &tur3);

    printf("Insira o código da quarta carta de cidade: ");
    scanf("%s", &cod4);
    printf("Insira o nome da cidade para a carta de código %s: ",cod4);
    scanf("%s", &nome4);
    printf("Insira a população da cidade (%s): ", nome4);
    scanf("%d", &pop4);
    printf("Insira a área (em km quadrados) da cidade (%s): ", nome4);
    scanf("%f", &area4);
    printf("Insira o PIB (em milhões de R$) da cidade (%s): ", nome4);
    scanf("%f", &pib4);
    printf("Insira o número de pontos turísticos da cidade (%s): ", nome4);
    scanf("%f", &tur4);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("\nFICHAS DAS CARTAS:\n");

    printf("Código: %s\nCidade: %s\nPopulação: %d\n", cod1, nome1, pop1);
    printf("Área (em km quadrados): %f\nPIB (em milhões de R$): %f\nPontos turísticos: %d\n\n", area1, pib1, tur1);

    printf("Código: %s\nCidade: %s\nPopulação: %d\n", cod2, nome2, pop2);
    printf("Área (em km quadrados): %f\nPIB (em milhões de R$): %f\nPontos turísticos: %d\n\n", area2, pib2, tur2);

    printf("Código: %s\nCidade: %s\nPopulação: %d\n", cod3, nome3, pop3);
    printf("Área (em km quadrados): %f\nPIB (em milhões de R$): %f\nPontos turísticos: %d\n\n", area3, pib3, tur3);

    printf("Código: %s\nCidade: %s\nPopulação: %d\n", cod4, nome4, pop4);
    printf("Área (em km quadrados): %f\nPIB (em milhões de R$): %f\nPontos turísticos: %d\n\n", area4, pib4, tur4);

    return 0;
}
