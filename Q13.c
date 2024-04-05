/*
O que é memory leak? Procure 3 exemplos de programas em C que apresentem memory leak e
explique o que acontece em cada um deles.

Memory leak ocorre quando não é liberado um espaço que não está mais em uso; não é liberado espaço antes da alocação de variáveis.
*/

//exemplo 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ptr = (int)malloc(sizeof(int)); //foi alocado espaço para a variável
    ptr = (int*)malloc(sizeof(int)); //foi alocado outro espaço para o ponteiro, sem liberar o espaço utilizado anteriormente

return 0;
}

//exemplo 2
#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int a = 12, b = 24; 
    {
        int *sum = (int*)malloc(sizeof(int)); //foi alocada memória no escopo local, não na função main
        *sum = a + b;
    }
   
    printf("%d\n", *sum); //será impresso um erro, pois "*sum" não foi declarada na função main em si, logo o espaço também não foi disponibilizado.
    return 0;
}

//exemplo 3
#include <stdlib.h>

int main() {
     int *ptr = (int *)malloc(sizeof(int));
     int a;
     ptr = &a; //o ponteiro referencia a variável, não mais o local alocado
     return 0;
 }
