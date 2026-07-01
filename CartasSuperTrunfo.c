#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  // Carta 1
    char letra1; // Uma letra de A a H, representando um dos 8 estados
    char codigo1[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Código da carta
    /* Esse char tem que ter um número por segurança, se o código for de 2 digitos, então temos que ter 4 espaços
    por segurança */
    char cidade1[30]; // Nome da cidade
    int populacao1, turisticos1;
    float area1, pib1; // Em km²

    // Carta 2
    char letra2; // Uma letra de A a H, representando um dos 8 estados
    char codigo2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Código da carta
    /* Esse char tem que ter um número por segurança, se o código for de 2 digitos, então temos que ter 4 espaços
    por segurança */
    char cidade2[30]; // Nome da cidade
    int populacao2, turisticos2;
    float area2, pib2; // Em km²

  // Área para entrada de dados

  printf("=== Carta 1 ===");
    printf("\nDigite Uma Letra de A a H: ");
        scanf(" %c", &letra1);
    printf("Digite o Código da Cidade (Dois Números): ");
        scanf("%s", codigo1); // Aqui não precisamos de &, podem ocorrer erros caso esteja presente
    printf("Digite o Nome da Cidade (Somente um Nome): ");
        scanf("%s", cidade1); // Aqui não precisamos de &, podem ocorrer erros caso esteja presente
    printf("Digite a População: ");
        scanf("%d", &populacao1);
    printf("Digite a Quantidade de Pontos Turísticos: ");
        scanf("%d", &turisticos1);
    printf("Digite a Área em KM²: ");
        scanf("%f", &area1);
    printf("Digite o PIB: ");
        scanf("%f", &pib1);

    printf("\n=== Carta 2 ===");
    printf("\nDigite Uma Letra de A a H: ");
        scanf(" %c", &letra2);
    printf("Digite o Código da Cidade (Dois Números): ");
        scanf("%s", codigo2); // Aqui não precisamos de &, podem ocorrer erros caso esteja presente
    printf("Digite o Nome da Cidade (Somente um Nome): ");
        scanf("%s", cidade2); // Aqui não precisamos de &, podem ocorrer erros caso esteja presente
    printf("Digite a População: ");
        scanf("%d", &populacao2);
    printf("Digite a Quantidade de Pontos Turísticos: ");
        scanf("%d", &turisticos2);
    printf("Digite a Área em KM²: ");
        scanf("%f", &area2);
    printf("Digite o PIB: ");
        scanf("%f", &pib2);

  // Área para exibição dos dados da cidade

  // Imprimindo Carta 1
    printf("\n");
    printf("====================================");
    printf("\n=== Carta 1 ===");
    printf("\n- Estado: %c", letra1);
    printf("\n- Código: %c%s", letra1, codigo1);
    printf("\n- Nome da Cidade: %s", cidade1);
    printf("\n- População: %d", populacao1);
    printf("\n- Área: %.2f KM²", area1);
    printf("\n- PIB : %.2f Bilhões de Reais", pib1);
    printf("\n- Pontos Turísticos: %d", turisticos1);
    printf("\n");

    // Imprimindo Carta 2
    printf("\n");
    printf("====================================");
    printf("\n=== Carta 2 ===");
    printf("\n- Estado: %c", letra2);
    printf("\n- Código: %c%s", letra2, codigo2);
    printf("\n- Nome da Cidade: %s", cidade2);
    printf("\n- População: %d", populacao2);
    printf("\n- Área: %.2f KM²", area2);
    printf("\n- PIB : %.2f Bilhões de Reais", pib2);
    printf("\n- Número de Pontos Turísticos: %d", turisticos2);
    printf("\n====================================");
    printf("\n");


return 0;
} 
