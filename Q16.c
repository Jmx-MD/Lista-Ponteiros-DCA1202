/*
Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.
*/
#include <stdio.h> //inclui biblioteca padrão
#include <stdlib.h> //inclui biblioteca padrão que contém a função qsort()
int comp(const void *a,const void *b)//função que recebe e ordena inteiros, recebe dois ponteiros para itens da lista
{
    int i;//contador 
    int n1 = *(int *)a; //obtém valor do item ao qual *a aponta
    int n2 = *(int *)b; //obtém valor do item ao qual *b aponta


    if (n1 < n2) //se o número anteriormente for menor
    {
        return -1;
    }
    else if (n1 > n2)//se o número localizado anteriormente for maior que o posterior
    {
        return 1;
    }
    else 
    {
        return 0;
        
    }
}

int main()
{
    int x,i,*l[x]; //tamanho da lista, contador, lista com x elementos 
    
    l[x] = (int *)malloc(x * sizeof(int)); //libera espaço para itens da lista
    
    printf("Tamanho da lista: ");
    
    scanf("%i",&x); //recebe um número (tamanho da lista)
    
    printf("\nInsira itens da lista:\n");
    
    for(i=0;i<x;i++){
        scanf("%p",&l[i]);//recebe itens da lista
    }
 
    qsort(l,x,sizeof(int),comp); //ordena itens da lista
    
    
    printf("Lista final:\n");
    for(i=0;i<x;i++){
        printf("%p ",l[i]); //imprime itens da lista final
    }
    
    
    return 0;
}
