int main(void) {
/* Váriaveis */
int qntd;
float preco, total, desc, totalcd;
/* Entradas */
printf("Qual a quantidade de produtos? ");
scanf("%d", &qntd);
printf("Qual o preço unitário do produto? ");
scanf("%f", &preco);
/* Valor total */
total = (preco * qntd);
printf("O total a sem descontos é %.2f\n", total);
/* Descontos */
if (qntd <= 5) {
desc = (total * 2) / 100;
totalcd = total - desc;
} else if (qntd > 5 && qntd <= 10) {
desc = (total * 3) / 100;
} else if (qntd > 10) {
desc = (total * 5) / 100;
} else {
printf("Algum valor está incorreto. Por favor tente novamente.");
}
/* Total a ser pago */
totalcd = total - desc;
printf("O total a ser pago é : R$%.2f", totalcd);
return 0;
}