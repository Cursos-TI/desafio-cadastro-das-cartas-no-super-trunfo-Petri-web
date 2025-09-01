#include <stdio.h>

int main(){

    char estado1, estado2;
    int codigo1, codigo2;
    char nome1[20], nome2[20];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;
    float dp1, dp2;
    float pibp1, pibp2;


    //Crie as variáveis da primeira e segunda cartas juntas// 

    printf("Digite o estado da primeira carta:");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta:");
    scanf("%d", &codigo1);

    printf("Digite o nome da primeira carta:");
    scanf("%s", nome1);

    printf("Digite a população da primeira carta:");
    scanf("%f", &populacao1);

    printf("Digite a área da primeira carta:");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira carta:");
    scanf("%d", &ponto1);

    dp1 = populacao1 / area1;

    pibp1 = pib1 / populacao1;
    

    //Aqui todas as informações da carta vão ser atribuídas às respectivas variáveis//

    printf("\nCarta 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.3f km^2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", pibp1);
    printf("\nPrimeira Carta Completa\nInsira as informações da segunda carta a seguir\n\n");

    //Informações da primeira carta serão exibidas, e haverá confirmação para começar a segunda carta//
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta:");
    scanf("%d", &codigo2);

    printf("Digite o nome da segunda carta:");
    scanf("%s", nome2);

    printf("Digite a população da segunda carta:");
    scanf("%f", &populacao2);

    printf("Digite a área da segunda carta:");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda carta:");
    scanf("%d", &ponto2);

    dp2 = populacao2 / area2;
    pibp2 = pib2 / populacao2;

    printf("\nCarta 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.3f km^2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", pibp1);
    printf("\n========================================\n");
    printf("           FIM DAS CARTA 1\n");
    printf("========================================\n");
    printf("\n\nCarta 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%d\n", estado2, codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per Capita: %.2f\n", pibp2);
    printf("\n========================================\n");
    printf("           FIM DAS CARTA 2\n");
    printf("========================================\n");


}
