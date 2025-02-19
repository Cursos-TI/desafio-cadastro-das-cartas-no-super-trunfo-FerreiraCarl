#include <stdio.h>

int main() {

    //Variaives utilizadas para carta 1
    int populacao, point_Turistico;
    char nome_Cidade[50], estado [50], cod_Cidade[50] ;
    float area, pib;
    
    //Variaives utilizadas para carta 2
    int populacao2, point_Turistico2;
    char nome_Cidade2[50], estado2 [50], cod_Cidade2[50] ;
    float area2, pib2;

    //Cadastro da carta1
    //Solicitando interação com o usuário e salvando as informações passadas
    printf("*** Carta 1 ***\n");

    printf("Estado:");
    scanf(" %s", estado);
    printf("Digite o codigo da cidade:");
    scanf(" %s", cod_Cidade);
    printf("Digite o nome da cidade:");
    //foi feita esse scanf difrente, pois ele normal ele trava no espaço do teclado, essa solução ignora o \n 
    scanf(" %50[^\n]s", nome_Cidade);
    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao);
    printf("Digite a area da cidade:");
    scanf("%f", &area);
    printf("Digite o PIB da cidade:");
    scanf("%f", &pib);
    printf("Digite quantidade de pontos turisticos da cidade:");
    scanf("%d", &point_Turistico);

    //Espaços para melhor leitura 
    printf("\n--------------\n\n");

    //Cadastro da carta2
    //Solicitando interação com o usuário e salvando as informações passadas
    printf("*** Carta 2 ***\n");

    printf("Estado:");
    scanf(" %s", estado2);
    printf("Digite o codigo da cidade:");
    scanf(" %s", cod_Cidade2);
    printf("Digite o nome da cidade:");
    //foi feita esse scanf difrente, pois ele normal ele trava no espaço do teclado, essa solução ignora o \n 
    scanf(" %50[^\n]s", nome_Cidade2);
    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade:");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);
    printf("Digite quantidade de pontos turisticos da cidade:");
    scanf("%d", &point_Turistico2);

    //Espaços para melhor leitura 
    printf("\n--------------RESULTADO--------------\n\n");

    // Exibição dos dados da carta 1:
    printf("*** Carta 1 ***\n\n");

    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", cod_Cidade);
    printf("Nome da cidade: %s\n", nome_Cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2fkm2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", point_Turistico);

    //Espaços para melhor leitura 
    printf("\n--------------\n\n");

    // Exibição dos dados da carta 2:
    printf("*** Carta 2 ***\n\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", cod_Cidade2);
    printf("Nome da cidade: %s\n", nome_Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", point_Turistico2);

    return 0;
}