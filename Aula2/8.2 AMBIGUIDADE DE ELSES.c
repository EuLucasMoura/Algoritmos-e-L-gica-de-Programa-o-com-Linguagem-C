#include <stdio.h>
main(void)
{
int num;
/* Obtem um numero do usuario */
printf("Entre com o numero de peras: ");
scanf("%d", &num);
/* Como a sentenca if e’ vista pelo compilador */
if (num != 0)
if (num == 1)
printf("Voce tem uma pera.\n");
else
printf("Voce nao tem nenhuma pera.\n");
}