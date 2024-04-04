/*
Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.
*/
#include <stdio.h>
#include <stdlib.h>

void ordem(){
    int i,n,a; //contador, tamanho da lista, variavel temporaria
    scanf("%i",&n);
    
    float l[n];
    
    float *size = malloc(n);
    
    
    for(i=0;i<n;i++){
        scanf("%f",&l[i]);
    }
    
    for(i=0;i<n;i++){
        if(l[i]>l[i+1]){
            a = l[i+1];
            l[i+1] = l[i];
            l[i] =a;
        }
        printf("%f ",l[i]);
    }
    
}

int main() {
    ordem();

    return 0;
}
