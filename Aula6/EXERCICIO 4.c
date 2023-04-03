#include <stdio.h>
int main(void){
float salario, salariofinalhora, salariofinalvalor;
int qtdehoras;
printf("Digite o salario bruto: ");
scanf("%f", &salario);
printf("Qtde de horas Trabalhadas no mês: ");
scanf("%d", &qtdehoras);
int totalhorasmes=40*4;
float salariohora=salario/totalhorasmes;
if (qtdehoras>totalhorasmes){
        int diferencahoras=qtdehoras-totalhorasmes;
	salariofinalhora=salariohora+diferencahoras*1.5f;
       printf("Salario hora final %.2f ", salariofinalhora);
} else{
salariofinalhora=salariohora+
       printf("Salario hora final %.2f ", salariohora);
}      
}



}