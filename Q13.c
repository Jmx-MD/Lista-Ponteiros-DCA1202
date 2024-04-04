/*
O que é memory leak? Procure 3 exemplos de programas em C que apresentem memory leak e
explique o que acontece em cada um deles.

Memory leak ocorre quando não é disponibilizado espaço suficiente para determinado conteúdo; não é liberado espaço antes da alocação de variáveis.
*/

//exemplo 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ptr = (int)malloc(sizeof(int));
    ptr = (int*)malloc(sizeof(int));

return 0;
}

//exemplo 2
#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int a = 12, b = 24; 
    {
        int *sum = (int*)malloc(sizeof(int));
        *sum = a + b;
    }
   
    printf("%d\n", *sum);
    return 0;
}

//exemplo 3
