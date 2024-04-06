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
        printf("%f\n",l[i]);
    }
    
    
    for(i=0;i<n;i++){
        if(l[i]>l[i+1]){
            *temp = l[i+1];
            l[i+1] = l[i];
            l[i] = *temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%f ",l[i]);
    }
    
    return *ptr;

}

int main()
{
    int x;
    scanf("%i",&x);
    
    float (*ptrl)(int) = &ordem;
    
    ptrl(x);
    
    return 0;
}
