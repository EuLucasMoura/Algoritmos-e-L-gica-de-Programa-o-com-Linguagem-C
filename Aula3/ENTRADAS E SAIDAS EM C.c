BIBLIOTECAS EM C
#include <stdio.h>  // funções de entrada/saída
#include <math.h>    // funções matemáticas
#include <stdlib.h> // funções de uso geral
#include <string.h> // funções para uso de strings
===================================================
TIPOS DE DADOS EM C
Tipo	Bytes	Bits	Intervalo
short int	2	16	-32.768...32.767 (32 Kb)
unsigned short int	2	16	0...65.535 (64 Kb)
unsigned int	4	32	0...4.294.967.295 (4Gb)
int	4	32	-2.147.483.648...2.147.483.647 (2 Gb)
long int	4	32	""
signed char	1	8	-128...127
unsigned char	1	8	0...255
float	4	32	7 casas de precisão
double	8	64	15 casas de precisão
char, caractere representado em 1 byte com sinal (-128 a 127) ou sem sinal (0 a 255)

short: forma curta
long: forma longa (às vezes igual ao sem modificador)
unsigned: representação sem sinal (somente positivos)
signed: representação com sinal (default)

===================================================
ENTRADA  DE DADOS  SCANF EM C

A  função scanf()
É utilizada para fazer a leitura de dados formatados via teclado.

Sintaxe:

scanf(“expressão de controle”, lista de argumentos);

Exemplo:

scanf(“%f”, &salario);
Explicação: este comando efetua uma leitura do teclado onde é esperada uma variável float (indicada por “%f”). O valor lido será armazenado no endereço da variável salário.

Na lista de argumentos devemos indicar os endereços das variáveis. Para fazer isso adicionamos o símbolo  “&”  como prefixo na frente do nome da variável.

Suponha que queiramos pedir um inteiro ao usuário, primeiro temos que declarar um inteiro. Vamos supor um de nome 'numero'.

Para o usuário armazenar um número nessa variável 'numero', usamos a seguinte sintaxe:

scanf("%d", &numero);

Essa função nos diz "armazene na variável 'numero' um inteiro".
O erro mais comum é esquecer o &, cuidado!

Por exemplo, vamos escrever um programa em C que pede um número ao usuário e o mostra na tela:

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d", numero);
}

Especificadores de tipo de exemplo reconhecidos por scanf:

%d para aceitar entrada de números inteiros.
%ld para aceitar entrada de inteiros longos
%lld para aceitar a entrada de inteiros longos e longos
%f para aceitar entrada de número real.
%c para aceitar entrada de tipos de caracteres.
%s para aceitar a entrada de uma string.



====================================================
PRINTF
printf(const char “formato”, …);

Para se realizar a impressão de textos no terminal deve-se utilizar a função printf. Ela possui um número variado de parâmetros, tantos quantos forem necessários.

O primeiro parâmetro da função printf deve ser uma string indicando o texto a ser mostrado. Nesta string deve ser colocado formatadores de tipo para cada variável que será impresso. No texto também podem ser colocados alguns caracteres especiais, indicados através da barra invertida, a serem impressos na saída.

Se a função printf não possuir nenhum parâmetro não será necessário colocar os formatadores de tipo em seu parâmetro de texto. Pode-se também colocar no texto caracteres indicados através da barra invertida.

Exemplos:

Para se imprimir um texto somente:
printf(“Sistema de Controle de Estoque”);
Para se imprimir um valor de um variável b do tipo inteiro:
printf(“%d”, b);
Misturando texto e valor de variáveis:
printf(“Acumulado:%d – Contas %d”,iTotAcum, iTotConta);
Com caracteres indicados através da barra invertida:
printf(“%d \t-\t %d\n”, b, c);


Código	Formato (tipo de dados)
%c	Caractere simples (char)
%s	Cadeia de caracteres (String)
%d	Inteiro decimal com sinal (int)
%i	Inteiro decimal com sinal (int)
%ld	Inteiro decimal longo (long)
%f	Real em ponto flutuante (float ou double)
%e	Número real em notação científica com o "e" minúsculo (float ou double)
%E	Número real em notação científica com o "E" maiúsculo (float ou double)
%%	Imprimir o próprio caractere %


===================================================
Vamos exemplificar o uso das funções printf e scanf através da soma de 2 valores do tipo inteiro.

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  //declaração de variáveis do tipo inteiro
  int a, b, soma;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &a); //recebe um inteiro e armazena na variável a
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &b); //recebe um inteiro e armazena na variável b
  soma = a + b;
  //Efetua adição de a com b e armazena na variável soma
  
  printf("O valor da soma = %d\n", soma); //Mostra mensagem com o resultado
  
  system ("pause");
  return(0);
}
================================================
scanf    - ATENÇÃO - SUPER IMPORTANTE
Lê caracter a caracter da entrada.

 char Ch;
 scanf("%c", &Ch);
Atenção
O scanf pode apresentar problemas na leitura de caracteres fornecido pelo usuário em sequência. Como scanf lê os caracteres no buffer de entrada (teclado), quando digitamos um caractere e teclamos Enter, o caractere '\n' vai para o buffer e é lido pelo próximo scanf.
Veja exemplo do problema:
 #include <stdio.h>
 int main()
 {
    char ch1, ch2;
    printf("Insira um caractere: ");
    scanf("%c",&ch1);
    printf("Insira outro caractere: ");
    scanf("%c",&ch2);
    printf("Você digitou: '%c' e '%c'", ch1, ch2);
    return(0);
 }
Soluções para limpar o buffer de entrada
1) Na função scanf insira um espaço entre a aspa e o símbolo %c.
 #include <stdio.h>
 int main()
 {
    char ch1, ch2;
    printf("Insira um caractere: ");
    scanf("%c",&ch1);
    printf("Insira outro caractere: ");
    scanf(" %c",&ch2);
    printf("Você digitou: '%c' e '%c'", ch1, ch2);
 }
================================================
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

#include <stdio.h>

int main(void) {

  char nome[20];
  printf("Entre com um nome: ");
  fgets(nome, 20, stdin);
  printf("\n%s", nome);

  /*
   Lê entrada até "nova linha" (LF). Quando a "nova linha" é lida o caractere
   '\n' (ASCII 10 LF) é acrescento na string, seguido pela terminação '\0'
   (NULL).
 */

  char uf[2];
  printf("Entre com um estado: ");
  fgets(uf, 3, stdin);
  printf("\n%s", uf);
}