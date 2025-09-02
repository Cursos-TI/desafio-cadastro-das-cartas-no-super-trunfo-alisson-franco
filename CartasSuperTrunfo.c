#include <stdio.h>  
// Biblioteca padrão para entrada e saída (printf e scanf)

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;                // Letra de A a H representando o estado
    char codigo1[4];             // Código da carta, ex: A01 (3 caracteres + '\0')
    char cidade1[50];            // Nome da cidade (sem espaço)
    int populacao1;              // Número de habitantes
    float area1;                 // Área da cidade em km²
    float pib1;                  // PIB da cidade em bilhões de reais
    int pontosTuristicos1;       // Quantidade de pontos turísticos

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes de %c serve para ignorar ENTER pendente

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); // %s lê strings (sem espaços)

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1); // OBS: só aceita cidades de uma palavra (ex: Recife)

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1); // lê número inteiro

    printf("Digite a Area em km2: ");
    scanf("%f", &area1); // lê número real (float)

    printf("Digite o PIB: ");
    scanf("%f", &pib1); // lê número real (float)

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1); // lê número inteiro

    
    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    
    // Saída de dados finalizada
    
    // Aqui mostramos todas as informações cadastradas na tela
    // Usamos %.2f para imprimir floats com duas casas decimais 
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    
    // Final 
    
    // return 0 significa que o programa terminou sem erros
    return 0;
}
