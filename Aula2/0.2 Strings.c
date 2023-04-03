#include <stdio.h>

int main(void)
{
  char nome[61];
  
  printf("Digite seu nome: ");
   scanf("%s", nome);
  
  printf("O nome armazenado foi: %s", nome);
  

  return 0;
}
   ===============================


#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
      char nome[100];
      char sobrenome[100];
      printf("Digite seu nome:\n");
      scanf("%s", nome);
      printf("Digite seu sobrenome:\n");
      scanf("%s", sobrenome);
      printf("Seu nome e: %s %s\n", nome, sobrenome);
      return 0;
}

===============================================
#include<stdio.h>
int main(void)
{
    char nome[20];
    printf("Entre com um nome: ");
   fgets(nome, 20, stdin);
    printf("\n%s",nome);
     return 0;
}

fgets(char str, int n, stdin)

str - É a variável na qual a string vai ser armazenada
n - É o comprimento máximo da string que deve ser lida
stdin: dispositivo de entrada padrão (geralmente o teclado)
stdin - É o buffer, de onde a string deve ser lida.
stdin é um fluxo de entrada para o qual os dados são enviados e lidos por um programa. 

O limite sempre é um caractere a menos que o especificado porque no final é incluso um caractere NULL para terminar a string.

stdout: dispositivo de saída padrão (geralmente o vídeo)
====================================================

#include <stdio.h>

#define NAME "TechOnTheNet.com"
#define AGE 10

int main()
{
   printf("%s is over %d years old.\n", NAME, AGE);
   return 0;
}

===========================================
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
   char *n1;
    printf("Entre com um numero: ");
   fgets(n1, 10, stdin);
    printf("\n%s",n1);
  int valor = atoi(n1);
  valor++;
    printf("\n%d",valor);
   return 0;
}
============================================
#include<stdio.h>
#include<conio.h>
int main(void)
{
  char nome[61];
  
  printf("Digite seu nome: ");
  gets(nome);
  
  printf("O nome armazenado foi: %s", nome);
  
  getch();
  return 0;
}


==========================================



#include <stdio.h>

main(){
    char nome[100], sobrenome[100];
    printf("Digite seu nome");
    fgets(nome,99,stdin);
    printf("Digite seu sobrenome");
    fgets(sobrenome,99,stdin);
    printf("o nome digitado foi: %s %s",nome,sobrenome);
    
}