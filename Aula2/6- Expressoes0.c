#include <stdio.h>
int main() {
int n1, n2, n3;
int soma;
printf( "Entre com 3 numeros inteiros: ");
scanf( "%d %d %d",&n1, &n2, &n3);
soma = n1 + n2 + n3;
printf( "Soma = %d\n", soma );
printf( "Media = %8.2f\n", soma / 3.0 );
printf( "Produto = %d\n", n1 * n2 * n3 );
}