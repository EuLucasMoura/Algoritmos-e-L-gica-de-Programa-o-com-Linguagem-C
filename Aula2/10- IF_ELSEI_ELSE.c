#include <stdio.h>
main(void)
{
int num1, num2;
/* obtem 2 numeros do usuario */
printf("Entre um numero: ");
scanf("%d", &num1);
printf("Entre com um outro numero: ");
scanf("%d", &num2);

/* mostra a mensagem de comparacao */
if (num1 == num2)
printf("Os numeros sao iguais\n");
else if (num1 < num2)
printf("O primeiro numero e menor\n");
else
printf("O primeiro numero e maior\n");
}