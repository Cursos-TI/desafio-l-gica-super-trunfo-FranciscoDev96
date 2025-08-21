// Base do jogo Super Trunfo:
#include <stdio.h>

int main() {
    
    // Declaração de variáveis da carta 1:
    char codigo[5], nome_cidade[30], estado[3];
    int pontos_turisticos;
    float area, PIB, densidade_populacional, PIB_capita, super_poder, densidade_inverso;
    unsigned long int populacao;

    //Cadastro das informações da 1ª carta:
    printf("Digite os dados da 1ª carta:\n");
    printf("Estado:");
    scanf("%s", &estado);

    printf("Código da carta (Letra do estado seguido de um número de 01 a 04):");
    scanf("%s", &codigo);

    printf("Nome da cidade:");
    scanf("%s", &nome_cidade);

    printf("População:");
    scanf("%lu", &populacao);

    printf("Área (Km²):");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &PIB);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional da carta 1:

    densidade_populacional = (float) populacao / area;
    densidade_inverso = (float) 1.0 / densidade_populacional;

    //Cálculo do PIB per capita da carta 1:

    PIB_capita = (float) PIB / populacao;
    
    // Somatória do Super poder da carta 1:

    super_poder = (float) pontos_turisticos + area + PIB + densidade_inverso + PIB_capita + populacao;
    
    // Declaração de variáveis da carta 2:
    char codigo2[5], nome_cidade2[30], estado2[3];
    int pontos_turisticos2;
    float area2, PIB2, densidade_populacional2, PIB_capita2, super_poder2, densidade_inverso2;
    unsigned long int populacao2;

    //Cadastro das informações da 2ª carta:
    printf("Digite os dados da 2ª carta:\n");
    printf("Estado:");
    scanf("%s", &estado2);

    printf("Código da carta (Letra do estado seguido de um número de 01 a 04):");
    scanf("%s", &codigo2);

    printf("Nome da cidade:");
    scanf("%s", &nome_cidade2);

    printf("População:");
    scanf("%lu", &populacao2);

    printf("Área (Km²):");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &PIB2);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional da carta 2:

    densidade_populacional2 = (float) populacao2 / area2;
    densidade_inverso2 = (float) 1.0 / densidade_populacional2;


    //Cálculo do PIB per capita da carta 2:

    PIB_capita2 = (float) PIB2 / populacao2;

    // Somatória do Super poder da carta 2:

    super_poder2 = (float) pontos_turisticos2 + area2 + PIB2 + densidade_inverso2 + PIB_capita2 + populacao2;

    
   // Declaração da váriavel da opção do jogador:

   int opcao;

   //Escolha da opção:

   printf("Digite um número para escolher o atributo que deseja comparar:\n");
   printf("1.Nome da cidade\n");
   printf("2.População\n");
   printf("3.Área\n");
   printf("4.PIB\n");
   printf("5.Números de Pontos Turísticos\n");
   printf("6.Densidade Demográfica\n");
   scanf("%d", &opcao);
    
    switch (opcao) {
    case 1:
        printf("Carta 1 - Nome da cidade: %s\n", nome_cidade);
        printf("Carta 2 - Nome da cidade: %s\n", nome_cidade2);
        break;
    case 2:
        printf("\nCarta 1 - Nome da cidade: %s\n", nome_cidade);
        printf("Carta 2 - Nome da cidade: %s\n", nome_cidade2);
        printf("O atributo selecionado foi: População\n");
        printf("Carta 1 - %u habitantes\n", populacao);
        printf("Carta 2 - %u habitantes\n", populacao2);
        if (populacao > populacao2) {
            printf("Carta 1 (%s) Venceu!", nome_cidade);

        } else if (populacao == populacao2) {
            printf("Foi um empate!");

        } else {
            printf("Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    case 3:
        printf("\nCarta 1 - Nome da cidade: %s\n", nome_cidade);
        printf("Carta 2 - Nome da cidade: %s\n", nome_cidade2);
        printf("O atributo selecionado foi: Área\n");
        printf("Carta 1 - %.2f Km²\n", area);
        printf("Carta 2 - %.2f Km²\n", area2);
        if (area > area2) {
            printf("Carta 1 (%s) Venceu!", nome_cidade);

        } else if (area == area2) {
            printf("Foi um empate!");

        } else {
            printf("Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    case 4:
        printf("\nCarta 1 - Nome da cidade: %s\n", nome_cidade);
        printf("Carta 2 - Nome da cidade: %s\n", nome_cidade2);
        printf("O atributo selecionado foi: PIB\n");
        printf("Carta 1 - %.2f bilhões de reais\n", PIB);
        printf("Carta 2 - %.2f bilhões de reais\n", PIB2);
        if (PIB > PIB2) {
            printf("Carta 1 (%s) Venceu!", nome_cidade);

        } else if (PIB == PIB2) {
            printf("Foi um empate!");

        } else {
            printf("Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    case 5:
        printf("\nCarta 1 - Nome da cidade: %s\n", nome_cidade);
        printf("Carta 2 - Nome da cidade: %s\n", nome_cidade2);
        printf("O atributo selecionado foi: Número de pontos turísticos\n");
        printf("Carta 1 - %d pontos turísticos\n", pontos_turisticos);
        printf("Carta 2 - %d pontos turisticos\n", pontos_turisticos2);
        if (pontos_turisticos > pontos_turisticos2) {
            printf("Carta 1 (%s) Venceu!", nome_cidade);

        } else if (pontos_turisticos == pontos_turisticos2) {
            printf("Foi um empate!");

        } else {
            printf("Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    case 6:
        printf("\nCarta 1 - Nome da cidade: %s\n", nome_cidade);
        printf("Carta 2 - Nome da cidade: %s\n", nome_cidade2);
        printf("O atributo selecionado foi: Densidade Demográfica\n");
        printf("Carta 1 - %.2f habitante por Km²\n", densidade_populacional);
        printf("Carta 2 - %.2f habitante po km2\n", densidade_populacional2);
        if (densidade_inverso > densidade_inverso2) {
            printf("Carta 1 (%s) Venceu!", nome_cidade);

        } else if (densidade_inverso2 == densidade_inverso) {
            printf("Foi um empate!");

        } else {
            printf("Carta 2 (%s) Venceu!", nome_cidade2);
        }
        break;
    default:
        printf("Opção inválida. Tente novamente.");
        break;
    }
   return 0;

}