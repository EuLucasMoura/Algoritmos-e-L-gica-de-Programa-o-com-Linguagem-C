#include <stdio.h>
int main()
{
    int testInteger = 5;
    printf("Numero Inteiro = %d", testInteger);
    return 0;
}


#include <stdio.h>
int main()
{
    float num1 = 13.5;
    double num2 = 12.4;

    printf("numero1= %f\n", num1);
    printf("numero2 = %f\n", num2);

   int n1=5;
float soma= n1/num1;

printf("soma = %.2f", soma);

    return 0;
}
=============================================

#include <stdio.h>
int main()
{
    float num1 = 1300.5;
    double num2 = 12.4;

    printf("numero1= %f\n", num1);
    printf("numero2 = %f\n", num2);

int n1=5;
float soma= num1/n1;

printf("soma = %3.2f", soma);

    return 0;
}


=================================================

printf ("%02d : %02d : %02d\n", hour, minute, second);

#include <stdio.h>
int main (void) {
    int hh = 3, mm = 1, ss = 4, dd = 159;
    printf ("Hora %02d:%02d:%02d.%06d\n", hh, mm, ss, dd);
    return 0;
}

===========================================
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
===================================================

Números Trocados
#include <stdio.h>
int main(){

int a, b, temp;
printf("Entre dois numeros: ");
scanf("%d %d", &a, &b);
printf("Voce entrou com %d e %d\n", a, b);
/* Troca a e b */
temp=b;
b=a;
a=temp;
printf("Trocados, eles sao %d e %d\n", a, b);
}