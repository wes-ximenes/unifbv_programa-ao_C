//Atividade de introdução a programação, para cadastrar 2 cartas de super trunfo:

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
};

int main() {
    struct Carta carta1, carta2; //A estrutura não foi passada na primeira aula, pesquisada por fora, afim de organização do código.

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %s", carta1.nomeCidade); 

    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Pra limpar o terminal antes da próxima carta
    getchar();

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: B02): ");
    scanf(" %s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %s", carta2.nomeCidade);

    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Saída
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
