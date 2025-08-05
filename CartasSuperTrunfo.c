#include <stdio.h>
int main(){

int populacao1, populacao2;
int npt1, npt2; //npt= Número de Pontos Turísticos 
char estado1;
char estado2;
char codigo1[2], codigo2[2];
char cidade1[20], cidade2[20]; 
float area1, area2;
float pib1, pib2;

// Carta 1

    printf("Carta 1: \n");

    printf("Digite uma letra de 'A' a 'H'para o Estado: \n");
    scanf("%c", &estado1);
    setbuf(stdin,0);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);
    setbuf(stdin,0);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);
    setbuf(stdin,0);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao1);
    setbuf(stdin,0);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area1);
    setbuf(stdin,0);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);
    setbuf(stdin,0);

    printf("Digete o número de pontos turísticos da Cidade: \n");
    scanf("%d", &npt1);
    setbuf(stdin,0);

// Resultado da carta 1

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado1); 
    printf("Código: %c%s \n",estado1, codigo1); 
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.0f km² \n", area1);
    printf("PIB: %.0f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n\n", npt1);

// Carta 2
printf("Carta 2: \n");

printf("DigiteUma letra de 'A' a 'H' para o Estado: \n");
scanf("%c", &estado2);
setbuf(stdin,0);

printf("Digite o código da carta: \n");
scanf("%s", &codigo2);
setbuf(stdin,0);

printf("Digite o nome da Cidade: \n");
scanf("%s", &cidade2);
setbuf(stdin,0);

printf("Digite a população da Cidade: \n");
scanf("%d", &populacao2);
setbuf(stdin,0);

printf("Digite a área da Cidade: \n");
scanf("%f", &area2);
setbuf(stdin,0);

printf("Digite o PIB da Cidade: \n");
scanf("%f", &pib2);
setbuf(stdin,0);

printf("Digete o número de pontos turísticos da Cidade: \n");
scanf("%d", &npt2);
setbuf(stdin,0);

//Resultado de carta 2

printf("\nCarta 2 \n");
printf("Estado: %c \n", estado2);
printf("Codigo: %c%s \n", estado2, codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %.0f Km² \n", area2);
printf("PIB: %.0f \n", pib2);
printf("Número de Pontos Turísticos: %d \n\n", npt2);

return 0;
}