#include <stdio.h>

int main(void) {
/* Variáveis */ 
  int opcao ;
  float preco, parcelas;
/* Preço do Produto */
  printf("Digite o valor do produto: \n");
    scanf(" %f", &preco);
/* Formas de pagamento */
printf("=======Opções de pagamento=======\n");
printf("[1] A vista no dinheiro ou débito\n");
printf("[2] A vista no cartão de crédito\n");
printf("[3] Parcelado em duas vezes no crédito\n");
printf("[4] Parcelado em três vezes no crédito\n");
printf("Selecione a opção de pagamento: ");
  scanf("%d", &opcao);
/* A vista no dinheiro ou débito*/
if (opcao == 1){
  preco = preco - (preco * 10) / 100;
/* A vista no crédito */
} else if (opcao == 2) {
  preco = preco - (preco * 5) / 100;
/* Parcelado em duas vezes */
} else if (opcao == 3) {
  preco = preco;
  parcelas = preco / 2;
  printf("O valor das suas parcelas é; RS %.2f\n", parcelas);
/* Parcelado em três vezes */
} else if (opcao == 4){
  preco = preco + (preco * 10) / 100;
  parcelas = preco / 2;
  printf("O valor das suas parcelas é; RS %.2f\n", parcelas);
/* Erro de digitação */
} else {
    printf("Opção de pagamento inválida.\n");
  }
/* Valor Total */
  printf("O total a ser pago é: R$ %.2f\n", preco);

  return 0;
}