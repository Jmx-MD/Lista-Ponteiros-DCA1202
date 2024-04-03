/* 9. Qual será a saída do seguinte programa


#include <stdio.h>
struct teste{
  int x = 3;
  char nome[] = "jose";
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->name);
}

Será impressa uma série de erros.

*/
