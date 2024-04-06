/*
(ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
cada um os bits possui um significado diferente, sendo necessário manipulá-los
individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
como dos operadores tilizados para realizar operações binárias nas linguagens de programação,
é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
variáveis inteiras.

#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
  x = x | b;
  y = y ^ a;
  z = z & (a+b);
  a = a >> 1;
  b = b << 1;
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}

Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa?

A saída será "15 13 0".
*/
//Programa alterado para teste:

#include <stdio.h>
int main(){
  int a, b;
  /*
  Para valores propostos:
  a = 10 (1010)
  b = 1 (0001)
  */
  
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
  x = x | b; //1011 (11) nas primeiras 2 , 1111 (15) nas últimas 2
  printf("%i ",x);
  y = y ^ a; //1011 (11), 1110 (14), 1100 (12), 1101 (13)
  printf("%i ",y);
  z = z & (a+b); //1011 (11), 0011 (3), 0010 (2), 0000 (0)
  printf("%i ",z);
  a = a >> 1; //0101 (5), 0101 (5), 0001 (1), 0000 (0)
  printf("%i ",a);
  b = b << 1; //0010 (2), 0100 (4), 1000 (8), 10000 (16)
  printf("%i\n",b);
  
  }
 
  printf ("\n%d %d %d\n", x, y, z);
  return 0;
}

