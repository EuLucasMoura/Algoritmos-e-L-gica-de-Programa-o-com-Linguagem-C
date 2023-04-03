#include <stdio.h>
int main() {
int n1=2, n2, n3;
printf("Entre com um numero inteiro: ");
scanf("‘%d", &n1);
n1 += n1 * 10;
n2 = n1 / 2;
n3 = n2 + 3 * 2;
n2 *= n3-- * 4;
printf("%d %d %d %d", n1, n2, n3, n2 != n3 + 21);
}