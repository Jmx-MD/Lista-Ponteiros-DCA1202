/*
O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. Explique seu programa,
comentando cada uma das linhas de código.


Um ponteiro para uma função contém o endereço desta. Comumente se usa a própria função (no formato funcao()), porém esse formato também é valido.

*/

#include <stdio.h>//inclui a biblioteca padrão
void imprimir()// declara uma função do tipo void (não retorna valores)
{
 printf("%s","Esta é uma função.");//imprime uma frase
}

int main() //função principal, necessariamente vai ser executada
{
    void (*ptr)() = &imprimir; //cria um ponteiro para a função imprimir (que também é uma função) - ou seja, executa o mesmo que ela quando chamado.

    imprimir(); //imprime "Esta é uma função."
    ptr(); //imprime "Esta é uma função."

    return 0; //retorna que a função foi executada corretamente
}
