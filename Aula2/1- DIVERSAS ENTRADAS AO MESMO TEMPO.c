Em C: scanf("%d %d”,&A, &B); /*se A e B são int */
ou
scanf("%f %f”,&A, &B); /*se A e B são float */

%lf  paradouble
=============================================
#include <stdio.h>
int main()
{
    float num1;
    double num2;

    printf("Entre com um numero: ");
    scanf("%f", &num1);
    printf("Entre com outro numero);
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);

    return 0;
}

==========================================
#include <stdio.h>
int main()
{
    float num1;
    double num2;

    printf("Entre com um número: ");
    scanf("%f", &num1);
    printf("Entre com outro número: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);
    return 0;
}
========================================

#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("%d + %d = %d", num1,num2,resultado);
}


==============================================

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Você digitou: '%d' e '%d'", num1, num2);
}
============================================

#include <stdio.h>
int main()
{
int dia, mes, ano;
printf("Entre com a data do seu aniversario (dd mm aa):");
scanf("%d %d %d", &dia, &mes, &ano);
printf("Voce nasceu em %d/%d/%d\n", dia, mes, ano);
}
=========================================

#include <stdio.h>
int main()
{
    char chr;
    printf("Entre com um caracter ");
    scanf("%c", &chr);     

    printf("Voce digitou %c.\n",chr);  

    printf("ASCII código da tecla %d.", chr);  
    return 0;
}
============================================
#include <stdio.h>
int main()
{
    int i, j, k;
    char string1[]= "10 20 30";
    sscanf(string1, "%d %d %d", &i, &j, &k);
    printf("Valores lidos: %d, %d, %d", i, j, k);
    return 0;
}

