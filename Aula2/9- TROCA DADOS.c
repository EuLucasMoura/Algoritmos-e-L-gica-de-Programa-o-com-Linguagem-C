#include <stdio.h>

int main()
{
	int num1, num2; 
	int tmp; // VARÁVEL A SER USADA PARA A TROCA
	
	num1 = 10; 
	num2 = 20; 
	
	// MOSTRA VALORES ATUAIS
	printf("num1 = %d, num2 = %d\n", num1, num2);
	
	tmp = num1; // GUARDA O VALOR DE num1 em tpm
	num1 = num2; // GUARDA O VALOR DE num2 em n1 ,PORTANTO NESTE MOMENTO num2 e num1 SAÃO IGUAIS
	num2 = tmp; // GURADA EM num2 o VALOR DE tmp OU SEJA O n1
	
	// MOSTRA OS VALORES COM AS TROCAS
	printf("num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}