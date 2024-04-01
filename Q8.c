// O que fazem os seguintes programas em C?

int main(){ //Este programa imprime os conteúdos das variáveis dentro da lista "vet".
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }

}
int main(){ //Este programa imprime os endereços das variáveis dentro da lista "vet".
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}
