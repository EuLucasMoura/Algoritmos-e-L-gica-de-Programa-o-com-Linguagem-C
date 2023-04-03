++    --

=   +=    -=   * =     /=    %=

<   <=   >   >=   ==     !=


operadores lógicos são
!           NÃO lógico,     operação de negação 
&&      E lógico, conjunção 
||        OU lógico, disjunção 

Por exemplo, se quisermos testar se um número num é positivo e par, e imprimir uma mensagem como
no exemplo anterior, podemos escrever:
if (num >= 0)
if (num % 2 == 0)
printf("Numero par nao negativo.\n");

Com os operadores lógicos isso pode ser simplificado:

if ((num>=0) && (num%2 == 0))
printf("Numero par nao negativo.\n");


Nós podemos usar o operador de negação lógica e escrever o exemplo acima como:
if (num>0 && !(num%2))
printf("Numero par nao negativo.\n");