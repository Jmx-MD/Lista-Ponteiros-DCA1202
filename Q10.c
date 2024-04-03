/* Qual será a saída do seguinte programa
#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}

Código alterado:

#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", (*x)+1);
}

//Imprimirá o número 4.
*/
