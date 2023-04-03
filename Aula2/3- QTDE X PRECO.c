#include <stdio.h>
#define PRECO 1.99
int main()
{
int pera = 3;
char qualidade = 'A';
float peso = 2.5;
printf("Existem %d peras de qualidade %c ", pera, qualidade);
printf("pesando %f quilos.\n", peso);
printf("O preco por quilo e %f, total e %f\n", PRECO, peso * PRECO);
}