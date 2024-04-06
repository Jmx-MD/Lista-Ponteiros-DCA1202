/*
Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.
*/
#include <stdio.h>
#include <malloc.h>
float ordem(int n)//função que recebe e ordena floats
{
    int i,*temp; //contador e ponteiro para mudança de posições na lista
    float l[n],*ptr; //lista e ponteiro da lista
    
    for(i=0;i<n;i++){
        scanf("%f",&l[i]);
    }
    
    
    for(i=0;i<n;i++){
        if(l[i]>l[i+1]){ //se o item anterior for maior que o posterior, eles trocam de posição
            *temp = l[i+1]; //item menor é posto em um ponteiro
            l[i+1] = l[i]; //a posição do item menor recebe o item maior
            l[i] = *temp; //a posição do item maior recebe o item menor
        }
    }
    for(i=0;i<n;i++){
        printf("%f ",l[i]); //imprime a lista final, em ordem
    }
    
    return *ptr; //retorna o ponteiro para a função

}

int main()
{
    int x;
    scanf("%i",&x); //pede um número (tamanho da lista)
    
    float (*ptrl)(int) = &ordem; //ponteiro para a função ordem
    
    ptrl(x); //executa a função
    
    return 0;
}
