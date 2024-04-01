/* Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e explique se
foram obtidas as respostas esperadas). */

/*
Após compilar, houveram avisos em relação aos 2 penúltimos prints (linhas 19 e 20): 
%X se refere a um número inteiro, mas os itens da lista "vet" são floats.
*/

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);
  printf(" *(f + %d) = %.1f",i, *(f+i));
  printf(" &vet[%d] = %X",i, &vet[i]);
  printf(" (f + %d) = %X",i, f+i);
  printf("\n");
  }
}

/*
Foram impressos os valores esperados, visto que floats ocupam 4 bytes na memória, e esse foi o espaçamento entre os endereços das
variáveis na lista "vet".
*/
