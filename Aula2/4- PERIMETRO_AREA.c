#include <stdio.h> /* inclui diretivas de entrada-saída */
#include <math.h> /* inclui diretivas das funções matemáticas */
#define PI 3.14159
int main()
{
/* Definir variaveis */
int Raio;
float Perim, Area;
/*
/* Obter Raio da circunferencia */
printf("Entre com o valor do raio: ");
scanf("%d", &Raio);
/* Calcular Perimetro do Circulo */
Perim = 2 * PI * Raio;
/* Calcular Area da Circunferencia */
Area = PI * pow(Raio, 2);
/* Exibir Resultados */
printf("O perimetro da circunferencia de raio %d eh %.2f \n", Raio, Perim);
// printf("O perimetro da circunferencia = %f\n", 2 * 3.14 * Raio);
printf("e a area eh %.2f", Area);
}