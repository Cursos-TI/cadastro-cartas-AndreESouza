#include <stdio.h>
int main() {

    // Variáveis da Carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

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
    scanf("%d", &PontosTuristicos1);

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
    scanf("%d", &PontosTuristicos2);

    // CÁLCULOS
    float Densidade1 = Populacao1 / Area1;
    float Densidade2 = Populacao2 / Area2;

    float PIBPerCapita1 = PIB1 / Populacao1;
    float PIBPerCapita2 = PIB2 / Populacao2;

    float SuperPoder1 =
        (float)Populacao1 + Area1 + PIB1 + PontosTuristicos1 +
        PIBPerCapita1 + (1.0f / Densidade1);

    float SuperPoder2 =
        (float)Populacao2 + Area2 + PIB2 + PontosTuristicos2 +
        PIBPerCapita2 + (1.0f / Densidade2);

    // COMPARAÇÕES
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Area: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);

    // Regra Especial: Menor densidade vence!
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPerCapita1 > PIBPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    printf("\n==================================================\n");

    return 0;
}
