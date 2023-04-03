
   VAI PEDIR O NOME    ????

   VOU PEDIR ESTADO  (UF) ????

   HÁ QUANTOS ANOS O CLIENTE COMPRA DA EMPRESA

  PEDIR O VALOR DO PRODUTO QUE O CLIENTE DESEJA COMPRAR
  
  PEDIR A QUANTIDADE

  DESEJA QUE ENTREGA (S OU N)

  PRECOINICIAL= VALOR * QUANTIDADE

  TABELA DE DESCONTOS  aplicado sobre desconto1= %*(quantidade * valor)
 QUANTIDADES       %DESCONTO
  0-5               0
  6-10              5%
  11-20             10%
  >=21              15%

 TEMPO QUE A PESSOA É CLIENTE ?   DESCONTO2 = %*(quantidade * valor)
  
  HÁ MAIS DE 5 ANOS  - DESCONTO 5%   
  SENÃO                DESCONTO 0

  ESTADO UF       DESCONTO    DESCONTO3 = (quantidade * valor) -R$
  SP              R$ 20
  RJ              R$ 15
  OUTROS          R$ 0

  ENTREGA  SIM    COBRAR R$ 30
           não      0
TOTAL = PRECOINICIAL - DESCONTO1-DESCONTO2-DESCONTO3 + ENTREGA
imprimir o nome do cliente e o valor total

==========================================================
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
=============================================================
#include<stdio.h>
int main(void)
{
     char nome[41];
     printf("Entre com um nome: ");
     fgets(nome, 41, stdin);
 
     char uf[3];
     printf("Entre com o estado ");  
     fgets(uf,3, stdin);
   
    int quantidade;
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    float valor;
    printf("Digite o valor: ");
    scanf("%f", &valor);

     printf("Entre com a entrega S ou N ");
  char entrega;
  scanf("%c", &entrega); 

  float precoinicial=quantidade*valor;
  float desconto1=0;
  
  if(quantidade<=5){
    desconto1=0;
   }
  else if(quantidade<=10){
    desconto1=0.05*precoinicial;
  }
  else if(quantidade<=20){
    desconto1=0.10*precoinicial;
  }
  else{
  desconto1=0.15*precoinicial;
  }
  
  

}





 
  

