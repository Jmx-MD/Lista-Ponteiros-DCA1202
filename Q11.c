/*
. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
// 4093, 4094 e 4095.
◦ x for declarado como int?
// 4094, 4096 e 4098.
◦ x for declarado como float?
// 4096, 4100 e 4104.
◦ x for declarado como double?
//4100, 4108 e 4116.
Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.
*/
#include <stdio.h>

int main()
{
    char xc[4]; //x se TIPO = char
    int xi[4]; //x se TIPO = int
    float xf[4]; //x se TIPO = float
    double xd[4]; //x se TIPO = double
    
    char *c;
    c= &xc[0];
    int *i;
    i = &xi[0];
    float *f;
    f=&xf[0];
    double *d;
    d = &xd[0];
    
    int a;
    
    printf("Endereços para char x[4]:\n");//char
    for(a=0;a<4;a++){ //imprime endereços x[0] a x[3]
        printf("%d ",&xc[a]);
    }
    
    printf("\n\nEndereços para int x[4]:\n");//int
    //pula duas linhas por organização
    for(a=0;a<4;a++){
        printf("%d ",&xi[a]);
    }
    
    printf("\n\nEndereços para float x[4]:\n");//float
    for(a=0;a<4;a++){
        printf("%d ",&xf[a]);
    }
    
    printf("\n\nEndereços para double x[4]:\n");//double
    for(a=0;a<4;a++){
        printf("%d ",&xd[a]);
    }

    return 0;
}

