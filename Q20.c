/*
Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o
resultado deve ficar armazenado em C).
multiplica_matrizes(A, B, C, 2, 3, 4);

- 3 ponteiros (p/ A B e C)
- ma,na,nb
- Anxm , Bmxn
- AB = C
*/

#include <stdio.h>

int mult_mat(pa,pb,pc,m,na,nb){
    scanf("%p %p %p",&pa,&pb,&pc);
    scanf(" %i %i %i",&m,&na,&nb);
    
    printf("%p %p %p %i %i %i",pa,pb,pc,m,na,nb);
    
    return 0;
}

int main()
{
    printf("Hello World");

    return 0;
}
