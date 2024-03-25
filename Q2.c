int main(void){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}
/* Será impresso: 4094 4095 7 15 9

Pois 
p = endereço de i (4094)
*p = conteúdo da variável à qual p aponta (i=5)
**&p = *p 
*/
