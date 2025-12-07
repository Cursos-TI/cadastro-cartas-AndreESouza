#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos1;

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (OBS: Digite uma letra entre: A e H): ");
    scanf(" %c", &Estado1);

    printf("Código da Carta (OBS: Digite a mesma letra que você colocou para Estado; juntamente com o numeral entre: 01 e 04): ");
    scanf("%s", Codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área (km²): ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &Pontos1);

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (OBS: Digite uma letra entre: A e H): ");
    scanf(" %c", &Estado2);

    printf("Código da Carta (OBS: Digite a mesma letra que você colocou para Estado; juntamente com o numeral entre: 01 e 04): ");
    scanf("%s", Codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área (km²): ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &Pontos2);

    // Exibição dos dados da Carta 1
    printf("\n==================================================\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", Pontos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", Pontos2);

    printf("\n==================================================\n");

    return 0;
}
