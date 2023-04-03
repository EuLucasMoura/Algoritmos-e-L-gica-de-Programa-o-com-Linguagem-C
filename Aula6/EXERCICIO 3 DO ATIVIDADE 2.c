#include <stdio.h>
int main(void){
float valor, valorfinal;
printf("Digite o valor da etiqueta: ");
scanf("%f", &valor);

printf("1- À vista em dinheiro\n");
printf("2- À vista no cartão de crédito\n");
printf("3- Em duas vezes, preço normal de etiqueta sem juros\n");
printf("4- Em três vezes, preço normal de etiqueta mais juros\n");

int op;

printf("Entre com o numero da opcao:\n");
scanf("%d", &op); 
switch (op) {
case 1:
valorfinal=valor-valor*0.1f;
break;
case 2:
valorfinal=valor-valor*0.05f;
break;
case 3:
valorfinal=valor;
break;
case 4:
valorfinal=valor+valor*0.1f;
break;
}

printf("\nValor a pagar = %.2f ",valorfinal);
}