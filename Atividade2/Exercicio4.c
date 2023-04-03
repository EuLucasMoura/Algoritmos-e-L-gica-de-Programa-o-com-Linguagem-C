#include <stdio.h>
int main(void) {
int horatr, horaext;
float salhr, salto, valhex;
/* Entradas */
printf("Quantas horas você trabalhou este mês? ");
scanf("%d", &horatr);
printf("Quanto você ganha por hora? ");
scanf("%f", &salhr);
if (horatr > 160){
horaext = horatr -160;
valhex = (salhr * horaext) * 1.5;
} else (horatr < 160);
horaext = 0;
/* sálario total */
salto = (salhr * horatr) + valhex ;
printf("Você trabalhou %d horas extras este mês.\n", horaext);
printf("O seu sálario total é de: %.2f", salto);
return 0;
}