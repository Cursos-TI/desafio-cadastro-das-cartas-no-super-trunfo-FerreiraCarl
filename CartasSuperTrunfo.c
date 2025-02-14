#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Carlos

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int Cod_cidade, Populacao, Point_turistico;
    char Nome_cidade[50];
    float Area, Pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome da cidade:");
    scanf(" %s", Nome_cidade);
    printf("Digite o código da cidade:");
    scanf("%d", &Cod_cidade);
    printf("Digite a população da cidade:");
    scanf("%d", &Populacao);
    printf("Digite quantidade de pontos turisticos da cidade:");
    scanf("%d", &Point_turistico);
    printf("Digite a área da cidade:");
    scanf("%f", &Area);
    printf("Digite o PIB da cidade:");
    scanf("%f", &Pib);

    printf("\n--------------\n\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Nome da cidade: %s\n", Nome_cidade);
    printf("Código da cidade: %d\n", Cod_cidade);
    printf("População da cidade: %d\n", Populacao);
    printf("Pontos turisticos da cidade: %d\n", Point_turistico);
    printf("Área da cidade: %.2f\n", Area);
    printf("PIB da cidade: %.2f\n", Pib);

    return 0;
}
