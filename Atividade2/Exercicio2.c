#include <stdio.h>

int main() {
  float altura, pesoif, pesoim;
  char sexo[2];
  /* Altura  */
  printf("Digite sua altura: \n");
  scanf("%f", &altura);
  /* Sexo  */
  printf("Digite seu sexo (M/F): ");
  scanf(" %c", &sexo);
  /* peso ideal feminino */
  if (sexo[0] == 'F' || sexo[0] == 'f') {
    pesoif = ((72.7 * altura) - 58);
    printf("Seu peso ideal é %f.\n", pesoif);
    /* Peso ideal masculino  */
  } else if (sexo[0] == 'M' || sexo[0] == 'm') {
    pesoim = ((62.1 * altura) - 44.7);
    printf("Seu peso ideal é %f.\n", pesoim);
    /* opção inválida */
  } else {
    printf("A opção digitada é inválida. Por favor digite novamente.");
  }
  return 0;
}
