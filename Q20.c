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
#include <malloc.h>

int **multmat(int m,int na,int nb,int **a,int **b, int **c){
    int i,j;//contadores linhas e colunas

    for(i=0;i<m;i++){
        for(j=0;j<m;i++){
            c[i][j] = a[i][j]*b[j][i]; //multiplica itens da linha de a pelos da coluna de b
        }
        
    }
    

    return c;
}

  int main()
{
    int m,na,nb;//dimensões das matrizes (visto que o mesmo valor se repete, foi criada apenas uma variável)
    int la,lb,lc; //linhas das matrizes
    la,lc = m;
    lb = nb;
    int ca,cb,cc; //colunas das matrizes
    ca,cc = na;
    cb =m;
    int i,j; //outros contadores
    int **x; //matriz vaga para uso da função
   
    //alocação de memória
    int **a = (int **)malloc(la * sizeof(int *));//aloca espaço para as linhas
    int **b = (int **)malloc(lb * sizeof(int *));
    int **c = (int **)malloc(lc * sizeof(int *));
    
    for (int i = 0; i < la; i++) {
        a[i] = (int *)malloc(ca * sizeof(int));//aloca espaço para os itens de cada coluna
    }
    for (int i = 0; i < la; i++) {
        b[i] = (int *)malloc(cb * sizeof(int));
    }
    for (int i = 0; i < la; i++) {
        c[i] = (int *)malloc(cc * sizeof(int));
    }
    
    //definição de matrizes
    
    scanf("%i\n%i\n%i",&m,&na,&nb);
    
    //matriz a
    for(i=0;i<la;i++){
        for(j=0;j<ca;j++){
            scanf("%i",&a[i][j]);
            printf("\n%i",a[i][j]);
        }
    }
    
    //matriz b
    for(i=0;i<lb;i++){
        for(j=0;j<cb;j++){
            scanf("%i",&b[i][j]);
            printf("\n%i",b[i][j]);
        }
    }
    
    
    //multiplicação de matrizes
    c = multmat(m,na,nb,a,b,x);
    
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%i ",c[i][j]);
        }
        printf("\n");
    }
    
    printf("%p",c);
    
    
    //liberação de memória após uso
    for (int i = 0; i < la; i++) {
        free(a[i]);
  }
    free(a);
    a = NULL;

    for (int i = 0; i < lb; i++) {
        free(b[i]);
  }
    free(b);
    b = NULL;

    for (int i = 0; i<lc; i++) {
        free(c[i]);
  }
    free(c);
    c = NULL;
    
  return 0;
}
