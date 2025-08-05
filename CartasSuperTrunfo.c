#include <stdio.h>
int main(){

int populacao1, populacao2;
int npt1, npt2; //npt= Número de Pontos Turísticos 
char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[20], cidade2[20]; 
float area1, area2;
float pib1, pib2;

// Carta 1

    printf("Carta 1: \n");

    printf("Digite uma letra de 'A' a 'H'para o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digete o número de pontos turísticos da Cidade: \n");
    scanf("%d", &npt1);

// Resultado da carta 1

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado1); 
    printf("Código: %c%s \n",estado1, codigo1); 
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n\n", npt1);

// Carta 2
printf("Carta 2: \n");

printf("DigiteUma letra de 'A' a 'H' para o Estado: \n");
scanf(" %c", &estado2);

printf("Digite o código da carta: \n");
scanf("%s", codigo2);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade2);

printf("Digite a população da Cidade: \n");
scanf("%d", &populacao2);

printf("Digite a área da Cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da Cidade: \n");
scanf("%f", &pib2);

printf("Digete o número de pontos turísticos da Cidade: \n");
scanf("%d", &npt2);

//Resultado de carta 2

printf("\nCarta 2 \n");
printf("Estado: %c \n", estado2);
printf("Codigo: %c%s \n", estado2, codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %.2f Km² \n", area2);
printf("PIB: %.2f \n", pib2);
printf("Número de Pontos Turísticos: %d \n\n", npt2);

return 0;
}