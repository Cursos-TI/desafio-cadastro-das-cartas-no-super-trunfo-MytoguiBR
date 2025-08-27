#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populaçao1, populaçao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;

    // Entrada da primeira carta.
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-Z)");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a cidade: ");
    scanf("%s", ciade1);

    printf("Digite a População: ");
    scanf("%d", &populaçao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Ponto turístico: ");
    scanf("%d", &pontosturisticos1);
    //Entrada da segunda carta.
    printf("Cadastro da carta 2:\n");
    printf("Digite o estado (A-Z): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populaçao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Ponto Turístico: ");
    scanf("%d", &pontosturisticos2);

    





    
    

    return 0;
}
