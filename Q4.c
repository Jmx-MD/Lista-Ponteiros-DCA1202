#include <stdio.h>
int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  //Foi impresso o esperada, visto que na linha 18, foi alterado o valor contid na variável à qual p1 apontava. Dessa forma, a variável "valor" foi alterada.
  
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

  //Ocorreu o mesmo da alternativa anterior; Foi alterado o valor da variável à qual o ponteiro apontava, nesse caso, a variável "temp".
  
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  //Imprimiu o esperado, visto que a variável "aux" é o conteúdo da variàvel à qual o ponteiro p3 aponta.

  /* (d) */
  p3= &nome[4];
  aux= *p3;
  printf("%c \n", aux);

  //Imprimiu o esperado, visto que a variável "aux" é o conteúdo da variàvel à qual o ponteiro p4 aponta.
  
  /* (e) */
  p3= nome;
  printf("%c \n", *p3);

  //Visto que o endereço em p3 é a própria string (nome), e está sendo impressa uma char, que é apenas uma letra, pode-se dizer que o resultado foi esperado. No entanto, não foi especificada qual dos caracteres da string. Imprimiu-se a primeira, e descartou-se as outras, pois não caberiam no tamanho desse tipo de dado.
  
  /* (f) */
  p3= p3+4;
  printf("%c \n", *p3);

  //Foi impresso o esperado, visto que p3 guarda o endereço da variável "nome" (string) e, como foi adicionado 4 ao endereço, esse mudou para a localização de outra letra (na posição 4/ quinta letra).
  
  /* (g) */
  p3--;
  printf("%c \n", *p3);

  //Foi impresso o esperado. Visto que foi decrescido do endereço, foi impressa a letra na posição 3/ quarta letra.
  
  /* (h) */
  vetor[0]= 31;
  vetor[1]= 45;
  vetor[2]= 27;
  p4= vetor;
  idade= *p4;
  printf("%d \n", idade);

  //Foi impresso o esperado, visto que o endereço contido em p4 era a própria lista "vetor". Assim, foi impresso o primeiro item dessa lista (31).
  
  /* (i) */
  p5= p4+1;
  idade= *p5;
  printf("%d \n", idade);

  //Foi impresso o esperado. Visto que foi acrescido 1 ao endereço dos itens da lista "vetor", foi impresso o item na posição 1/ segundo item.
  
  /* (j) */
  p4= p5+1;
  idade= *p4;
  printf("%d \n", idade);

  //Foi impresso o esperado. Visto que foi acrescido 1 ao endereço dos itens da lista "vetor", foi impresso o item na posição 2/ terceiro item.
  
  /* (l) */
  p4= p4-2;
  idade= *p4;
  printf("%d \n", idade);

  //Foi impresso o esperado. Visto que foi descrescido 2 ao endereço dos itens da lista "vetor", foi impresso o item na posição 0/ primeiro item.
  
  /* (m) */
  p5= &vetor[2]-1;
  printf("%d \n", *p5);

  //Foi impresso o esperado. Visto que foi descrescido 1 ao endereço do segundo iten da lista "vetor", foi impresso o item na posição 1/ segundo item.
  
  /* (n) */
  p5++;
  printf("%d \n", *p5);
  return(0);

  //Foi impresso o esperado. Visto que foi acrescido 1 ao endereço do item 1/ segundo item da lista "vetor", foi impresso o item na posição 2/ terceiro item.

}

