#include <stdio.h>

int main(){
  //   variaveis da carta 1 
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int população1;
  float area1;
  float pib1;
  int pontosturisticos1;

  // variaveis da carta 2

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int população2;
  float area2;
  float pib2;
  int pontosturisticos2;

  //leitura da carta mumero 1
  printf("cadastro da carta numero 1:\n");

  printf("Digite o Estado (A-H):\n");
  scanf ("%c", &estado1);

  printf ("digite o codigo da carta:\n");
  scanf ("%s", &codigo1);

  printf ("digite o nome da cidade:\n");
  scanf (" %[^\n]", &cidade1);

  printf ("digite a quantidade da população\n");
  scanf ("%d", &população1);

  printf ("digite a área (em km²)\n");
  scanf ("%f", &area1);

  printf ("digite o pib\n");
  scanf ("%f", &pib1);

  printf ("digite o número de pontos turisticos\n");
  scanf ("%d", &pontosturisticos1);

  //// leitura da carta 2 

  printf ("cadastro da carta numero2 :/n");

  printf("Digite o Estado (A-H):\n");
  scanf ("%c", &estado2);

  printf ("digite o codigo da carta:\n");
  scanf ("%s", &codigo2);

  printf ("digite o nome da cidade:\n");
  scanf (" %[^\n]", &cidade2);

  printf ("digite a quantidade da população\n");
  scanf ("%d", &população2);

  printf ("digite a área (em km²)\n ");
  scanf ("%f", &area2);

  printf ("digite o pib\n");
  scanf ("%f", &pib2);

  printf ("digite o número de pontos turisticos\n");
  scanf ("%d", &pontosturisticos2\n);

///exibição das cartas cadastradas

printf ("\n ==========================\n");
printf ("carta n° 1 \n");
printf ("estado: %c\n", estado1);
printf ("codigo: %s\n", codigo1);
printf ("cidade: %s\n",cidade1);
printf ("população: %d\n",população1);
printf ("Área: %.2f km²\n", area1);
printf ("PIB: %.2f bilhões de reais\n", pib1);
printf ("Número de pontos turísticos: %d\n", pontosturisticos1);


printf ("carta n° 2 \n");
printf ("estado: %c\n", estado2);
printf ("codigo: %s\n", codigo2);
printf ("cidade: %s\n",cidade2);
printf ("população: %d\n",população2);
printf ("Área: %.2f km²\n", area2);
printf ("PIB: %.2f bilhões de reais\n", pib2);
printf ("Número de pontos turísticos: %d\n", pontosturisticos2);

printf ("\n ==========================\n");

return 0;

}