#include <stdio.h>
#include <string.h>

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

  int tempo;
  printf("Quanto tempo é cliente: ");
  scanf("%d", &tempo);

  printf("Entrega S ou N ");
  char entrega;
  scanf(" %c", &entrega);

  float precoinicial = quantidade * valor;
  printf("\n\nPreço Inicial: %f", precoinicial);

  /*
  0-5               0
  6-10              5%
  11-20             10%
  >=21              15%
    */
  float desconto1, desconto2, desconto3;
  if (quantidade < 6) {
    desconto1 = 0;
  } else if (quantidade < 11) {
    desconto1 = 0.05f * quantidade * valor;
  } else if (quantidade < 21) {
    desconto1 = 0.10f * quantidade * valor;
  } else {
    desconto1 = 0.15f * quantidade * valor;
  }
  /*
  TEMPO QUE A PESSOA É CLIENTE ?   DESCONTO2 = %*(quantidade * valor)

    HÁ MAIS DE 5 ANOS  - DESCONTO 5%
    SENÃO                DESCONTO 0
    */
  if (tempo >= 5) {
    desconto2 = 0.05 * quantidade * valor;
  } else {
    desconto2 = 0;
  }

  /*
 ESTADO UF       DESCONTO    DESCONTO3 = (quantidade * valor) -R$
  SP              R$ 20
  RJ              R$ 15
  OUTROS          R$ 0
  */

  /*
  char resposta;
    resposta = strcmp(uf, "SP");
    if(resposta==0){
    printf("\n\nIgual");
  }
  else{
        printf("\n\nDiferente");
  }
  */

  if (strcmp(uf, "SP") == 0 || strcmp(uf, "sp") == 0) {
    desconto3 = 20;
  } else if (strcmp(uf, "RJ") == 0 || strcmp(uf, "rj") == 0) {
    desconto3 = 15;
  } else {
    desconto3 = 0;
  }

  /*
     ENTREGA  SIM    COBRAR R$ 30
               não      0
    TOTAL = PRECOINICIAL - DESCONTO1-DESCONTO2-DESCONTO3 + ENTREGA
    imprimir o nome do cliente e o valor total
    */
  int valentrega;
  // if (strcmp(&entrega, "s") == 0 || strcmp(&entrega, "S") == 0) {
  if (entrega == 'S' || entrega == 's') {
    valentrega = 30;
  } else {
    valentrega = 0;
  }

  float total = precoinicial - desconto1 - desconto2 - desconto3 + valentrega;
  printf("\n\nPreço Desconto1: %.2f", desconto1);
  printf("\n\nPreço Desconto2: %.2f", desconto2);
  printf("\n\nPreço Desconto3 %.2f", desconto3);
  printf("\n\nEntrega: %c", entrega);
  printf("\n\nEntrega: %d", valentrega);

  printf("\n\nPreço Final: %.2f", total);
}