//Desafio 1 de introdução a programação, para cadastrar 2 cartas de super trunfo:
//Desafio 2 de intridução a programação, adicionar um mecanismo de cálculo de densidade populacional e PIB per capita, e imprimir os resultados.
//O VS CODE não está imprimindo acentos e caracteres especiais.

#include <stdio.h>

// Estrutura de uma carta de Super Trunfo
struct Carta {
    char estado;                  // Letra de 'A' a 'H'
    char codigo[4];              // Ex: A01, B03
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões de reais
    int pontosTuristicos;       // Número de pontos turísticos
    float DP;                   // Densidade populacional = população/área (desafio 2)
    float PPC;                  // PIB per capita = PIB/população (desafio 2)
};

int main() {
    struct Carta carta1, carta2; //A estrutura não foi passada na primeira aula, pesquisada por fora, afim de organização do código.

    printf("------ Cadastro da Carta 1 ------\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %s", carta1.nomeCidade); 

    printf("Informe a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a area (em km): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.DP = carta1.populacao/carta1.area; //Adicão do desafio 2
    carta1.PPC = carta1.pib/carta1.populacao;

    // Pra limpar o terminal antes da próxima carta
    getchar();

    printf("\n------ Cadastro da Carta 2 ------\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o codigo da carta (ex: B02): ");
    scanf(" %s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %s", carta2.nomeCidade);

    printf("Informe a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a area (em km): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.DP = carta2.populacao/carta2.area; //Adicão do desafio 2
    carta2.PPC = carta2.pib/carta2.populacao;

    // Saída
    printf("\n------- Carta 1 -------\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta1.DP);
    printf("PIB per capita: %.2f\n", carta1.PPC);

    printf("\n------- Carta 2 ------\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta2.DP);
    printf("PIB per capita: %.2f\n", carta2.PPC);

    return 0;
}
