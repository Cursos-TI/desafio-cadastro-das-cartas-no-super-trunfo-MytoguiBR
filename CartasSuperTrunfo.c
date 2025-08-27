#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populaçao1, populaçao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;

    // Entrada da primeira carta.
    printf("Cadastro da Carta 1:\n");
    
    printf("Digite o Estado (A-Z): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populaçao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Ponto turístico: ");
    scanf("%d", &pontosturisticos1);
   
    printf("\n");
    
    //Entrada da segunda carta.
    printf("Cadastro da carta 2:\n");

    printf("Digite o estado (A-Z): ");
    scanf("%c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populaçao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Ponto Turístico: ");
    scanf("%d", &pontosturisticos2);

    //Exibição das informações.

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    


    return 0;
}
