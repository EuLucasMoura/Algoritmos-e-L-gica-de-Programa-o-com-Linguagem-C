Exercício 1
#include <stdio.h>

int main(void) {
  float n1, n2, n3, media;
  
  /* Entrada das notar */
  
  printf("Digite a primeira note: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  printf("Digite a segunda nota: ");
  scanf("%f", &n3);
  
  /* Cálculo de média*/
  
  media = (n1 + n2 + n3) / 3;
  printf("Sua média é %.2f\n", media);
  
  /* Se */
  
  if (media >= 7 && media <= 10){
    printf("Você foi APROVADO!");
} else if (media < 7 && media >= 3){
    printf("Você está de EXAME!");
} else if (media < 3){
    printf("Você está REPROVADO!");
} else {
    printf("Alguma nota inserida é invalida tente novamente.");
    
}
  return 0;
}
