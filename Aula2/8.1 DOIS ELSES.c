#include <stdio.h>
main(void)
{
int num;
/* Obtem um numero do usuario */
printf("Entre com um inteiro: ");
scanf("%d", &num);
/* Imprime uma mensagem dizendo se o numero e positivo ou
negativo, positivo ou negativo. */
if (num >= 0) {
if (num % 2 == 0)
printf("O numero e par e positivo\n");
else
printf("O numero e impar e positivo\n");
}
else {
if (num % 2 == 0)
printf("O numero e par e negativo\n");
else
printf("O numero e impar e negativo\n");
}
}