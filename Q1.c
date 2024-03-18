#include <std.io>

int main(void){
  int i=3,j=5;
  int *p, *q;
  p = &i;
  q = &j;
  bol = false;
  
  //p == &i;
  if(p==&i){
    bol = true;
  }
  printf(bol);
  //
    
  //*p - *q;
  a = *p - *q;
  printf(a);
  
  //**&p;
  b = **&p;
  print(b);
  
  //3 - *p/(*q) + 7;
  c = 3 - *p/(*q) + 7;
  printf(c);

  


}
