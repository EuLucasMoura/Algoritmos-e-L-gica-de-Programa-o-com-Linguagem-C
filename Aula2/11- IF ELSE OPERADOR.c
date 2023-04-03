#include <stdio.h>
main(void)
{
float num1, num2;
char op;

/* obtem uma expressao do usuario */
printf("Entre com numero operador numero\n");
scanf("%f %c %f", &num1, &op, &num2);

printf("op = %c\n",op);

//mostra o resultado da operacao 
if (op == '+')
printf(" = %.2f", num1 + num2);
else if (op == '-')
printf(" = %.2f", num1 - num2);
else if (op == '/')
printf(" = %.2f", num1 / num2);
else if (op == '*')
printf(" = %.2f", num1 * num2);
else
printf(" Operador invalido.");
printf("\n");

}