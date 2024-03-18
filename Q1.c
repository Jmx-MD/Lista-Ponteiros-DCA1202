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
  //Imprime "true", pois p é igual ao endereço de i (&i).
    
  //*p - *q;
  a = *p - *q;
  printf(a);
  //**Imprime o resultado da diferença do endereços contido em p e q, pois as variáves em si (ponteiros) não contém os conteúdos de i e j (números inteiro).
  
  //**&p;
  b = **&p;
  print(b);
  //Imprime o endereço de p, pois o símbolo "&" indica endereço, enquanto os dois "*" indicam ponteiros (b, ponteiro de p, e p, ponteiro de i).
  
  //3 - *p/(*q) + 7;
  c = 3 - *p/(*q) + 7;
  printf(c);
  //**Imprime o resultado da equação, sendo *p e *q os endereços d i e j, pois aqui se acessa as variáveis p e q em si, e não o conteúdo das variáveis às quais apontam.

  //** = rever

  


}
