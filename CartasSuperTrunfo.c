#include <stdio.h>
int main(){

int populacao1, populacao2;
int npt1, npt2; //npt= Número de Pontos Turísticos 
char estado1;
char estado;
char codigo1[2], codigo2[2];
char cidade1[20], cidade2[20]; 
float area1, area2;
float pib1, pib2;

// Carta 1

    printf("Carta 1: \n");

    printf("Digite uma letra de 'A' a 'H'para o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digete o número de pontos turísticos da Cidade: \n");
    scanf("%d", &npt1);

// Resultado da carta 1

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1); 
    printf("Código: %c%s \n",estado1, codigo1); 
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d km² \n", populacao1);
    printf("Área: %.0f \n", area1);
    printf("PIB: %.0f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n\n", npt1);

// Carta 2



return 0;
}