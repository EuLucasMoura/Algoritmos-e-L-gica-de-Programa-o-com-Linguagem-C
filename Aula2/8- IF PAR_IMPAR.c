#include <stdio.h>
int main(void)
{
int num;
/* obtem um numero do usuario */
printf("Entre com um inteiro: ");
scanf("%d", &num);
/* imprime uma mensagem dizendo se o numero e par ou impar */
if (num % 2 == 0)
printf("O numero e par.\n");
else
printf("O numero e impar.\n");
}