#include <stdio.h>
int main(void) {
  char nome[40];
  printf("Entre com um nome: ");
  fgets(nome, 40, stdin);

  char uf[2];
  printf("Entre com o estado ");
  fgets(uf, 3, stdin);
  int quantidade;
  printf("Digite a quantidade: ");
  scanf("%d", &quantidade);

  float valor;
  printf("Digite o valor: ");
  scanf("%f", &valor);

  printf("Entre com a entrega S ou N ");
  char entrega;
  scanf(" %c", &entrega);

  float precoinicial = quantidade * valor;
  printf("\n\nPreço Inicial: %f", precoinicial);
}