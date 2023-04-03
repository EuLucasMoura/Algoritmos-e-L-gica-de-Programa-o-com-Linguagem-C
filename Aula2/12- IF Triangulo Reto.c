/*
No próximo exemplo, o programa verifica se as três variáveis lado1, lado2, e lado3, podem ser
lados de um triângulo reto. Nós usamos o fato que os três valores devem ser positivos, e que o quadrado de
um dos lados deve ser igual a soma dos quadrados dos outros lados (Teorema de Pitágoras) para determinar
se o triângulo é reto.
*/
#include <stdio.h>
int main() {
int lado1, lado2, lado3;
int s1, s2, s3;
printf("Entre com o tamanho dos lados do triangulo: ");
scanf("%d %d %d", &lado1, &lado2, &lado3);
/* calcula o quadrado dos lados */
s1 = lado1*lado1;
s2 = lado2*lado2;
s3 = lado3*lado3;

printf("Quadrado dos lados %d %d %d\n",s1,s2,s3);

/* testa a condicao para um triangulo reto */
if ( lado1>0 && lado2>0 && lado3 > 0 ) {
if (s1==s2+s3 || s2==s1+s3 || s3==s1+s2) {
printf("Triangulo reto!\n");
}
else {
printf("Nao pode ser um triangulo!\n");
}
}
}