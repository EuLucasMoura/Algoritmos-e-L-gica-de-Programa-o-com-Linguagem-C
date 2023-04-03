#include <stdio.h>

int main() {
    int a, b, c, soma;
    /* A */
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    /* B */
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    /* C */
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    /* Soma */
    soma = a + b;
    printf("A soma de %d e %d é igual a %d.\n", a, b, soma);
    /* Se */
    if (soma > c) {
         printf("A soma de %d com %d é maior que %d.\n", a, b, c);
    } else {
         printf("A soma de %d e %d não é maior que %d.\n", a, b, c);
    }
    return 0;
}
