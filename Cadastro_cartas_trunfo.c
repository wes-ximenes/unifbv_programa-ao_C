/*
(tema 2/desafio 1) de introdução a programação, para cadastrar 2 cartas de super trunfo:
(tema 2/desafio 2) de introdução a programação, adicionar um mecanismo de cálculo de densidade populacional e PIB per capita, e imprimir os resultados.
(tema 2/desafio 3) de introdução a programação, alterar o tipo da população para unsigned long, calcular o superpoder, comparar os atributos numéricos das cartas e imprimir os resultados em booleano.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
(tema 3/desafio 1) de introdução a programação, escolher apenas um atributo numérico para comparaçao diretamente no código, sem interação com usuário. Exibir o resultado.
(tema 3/desafio 2) de introdução a programação, criar um menu interativo com switch + if/else aninhadas, para escolha de atributo e comparação. Ao final imprimindo o resultado.

O VS CODE não está imprimindo acentos e caracteres especiais.
*/

#include <stdio.h>

// Estrutura de uma carta de Super Trunfo
struct Carta {
    char estado;                 // Letra de 'A' a 'H'
    char codigo[4];              // Ex: A01, B03
    char nomeCidade[50];         // Nome da cidade
    unsigned long int populacao; // Número de habitantes com 'unsigned long', positivará os dados (tema 2/desafio 3)
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões de reais
    int pontosTuristicos;        // Número de pontos turísticos
    float DP;                    // Densidade populacional = população/área (tema 2/desafio 2)/(menor DP vence)
    float PPC;                   // PIB per capita = PIB/população (tema 2/desafio 2)
    float superpoder;            // Somatório de todos os atributos numéricos (tema 2/desafio 3)
};

int main() {
    struct Carta carta1, carta2; //O vetor não foi passado nas primeiras aulas, pesquisada por fora, afim de organização do código.

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

    carta1.DP = carta1.populacao/carta1.area; //Adicão do tema 2/desafio 2
    carta1.PPC = carta1.pib/carta1.populacao;
    carta1.superpoder = (float)carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.PPC + (1.0 / carta1.DP); //somatório dos atributos com conversão para float (tema 2/desafio 3)

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
    carta2.superpoder = (float)carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.PPC + (1.0 / carta2.DP); //somatório dos atributos com conversão para float (tema 2/desafio 3)

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

    /* Comparações das cartas, resultado em booleano (tema 2/desafio 3) *etapa colocada como comentário, para impressão apenas do atributo escolhido.
    printf("\n---- Comparacao de cartas ----\n");
    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.DP < carta2.DP); // menor vence
    printf("PIB per capita: Carta 1 venceu (%d)\n", carta1.PPC > carta2.PPC);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superpoder > carta2.superpoder);


     Comparação baseada em um único atributo: "População" (EXEMPLO QUE ESCOLHI) (tema 3/desafio 1)
    printf("\n---- Comparacao de cartas (Atributo: Populacao) ----\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", carta1.nomeCidade, carta1.estado, carta1.populacao); // %lu usado para variaveis do tipo unsigned long.
    printf("Carta 2 - %s (%c): %lu habitantes\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
    }*/

    int escolha; // menu interativo com switch, pra escolha de atributo e comparação. (tema 3/desafio 2)

    printf("\n---- Menu de Comparacao ----\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    printf("\n---- Resultado da Comparacao ----\n");

    switch (escolha) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", carta1.nomeCidade, carta1.populacao);
            printf("%s: %lu habitantes\n", carta2.nomeCidade, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("Vencedora: %s\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedora: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 2: //área
            printf("Atributo: Area\n");
            printf("%s: %.2f km quadrados\n", carta1.nomeCidade, carta1.area);
            printf("%s: %.2f km quadrados\n", carta2.nomeCidade, carta2.area);

            if (carta1.area > carta2.area)
                printf("Vencedora: %s\n", carta1.nomeCidade);
            else if (carta2.area > carta1.area)
                printf("Vencedora: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", carta1.nomeCidade, carta1.pib);
            printf("%s: %.2f bilhoes\n", carta2.nomeCidade, carta2.pib);

            if (carta1.pib > carta2.pib)
                printf("Vencedora: %s\n", carta1.nomeCidade);
            else if (carta2.pib > carta1.pib)
                printf("Vencedora: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.nomeCidade, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Vencedora: %s\n", carta1.nomeCidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Vencedora: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Populacional (menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km quadrados\n", carta1.nomeCidade, carta1.DP);
            printf("%s: %.2f hab/km quadrados\n", carta2.nomeCidade, carta2.DP);

            if (carta1.DP < carta2.DP)
                printf("Vencedora: %s\n", carta1.nomeCidade);
            else if (carta2.DP < carta1.DP)
                printf("Vencedora: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("%s: %.2f R$/hab\n", carta1.nomeCidade, carta1.PPC);
            printf("%s: %.2f R$/hab\n", carta2.nomeCidade, carta2.PPC);

            if (carta1.PPC > carta2.PPC)
                printf("Vencedora: %s\n", carta1.nomeCidade);
            else if (carta2.PPC > carta1.PPC)
                printf("Vencedora: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção invalida. Tente novamente.\n");
    }


    return 0;
}
