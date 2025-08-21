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


   // Impressão da comparação do atributo pontos turísticos:

   printf("*** Comparação de cartas ***\n");
   printf("\n(Atributo: População):\n");
   printf("Carta 1 - %s (%s): %u\n", nome_cidade, estado, populacao);
   printf("Carta 2 - %s (%s): %u\n", nome_cidade2, estado2, populacao2);

   if (populacao > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
}   else {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}
   
   printf("\n(Atributo: Área)\n");
   printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, area);
   printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, area2);

    if (area > area2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
}   else {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}

   printf("\n(Atributo: PIB)\n");
   printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, PIB);
   printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, PIB2);

    if (PIB > PIB2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
}   else {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}

   printf("\n(Atributo: Pontos Turísticos)\n");
   printf("Carta 1 - %s (%s): %d\n", nome_cidade, estado, pontos_turisticos);
   printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, pontos_turisticos2);

    if (pontos_turisticos > pontos_turisticos2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
}   else {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}

   printf("\n(Atributo: Densidade Populacional)\n");
   printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, densidade_populacional);
   printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, densidade_populacional2);

    if (densidade_inverso > densidade_inverso2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
}   else {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}

   printf("\n(Atributo: PIB per capita)\n");
   printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, PIB_capita);
   printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, estado2, PIB_capita2);

    if (PIB_capita > PIB_capita2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
}   else {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
}

   
   return 0;

}