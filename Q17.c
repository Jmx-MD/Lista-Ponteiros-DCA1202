/*
Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria
função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua
função deverá receber, entre outros argumentos, um ponteiro para a função de comparação
que determinará como os elementos do array serão ordenados.
*/
#include <stdio.h>
#include <stdlib.h>
int ordem_i(int n)//função que recebe e ordena inteiros
{
    int i,*temp; //contador e ponteiro para mudança de posições na lista
    int l[n],*ptr; //lista e ponteiro da lista
    
    for(i=0;i<n;i++){
        scanf("%f",&l[i]);
    }
    
    
    for(i=0;i<n;i++){

    if (l[i] < l[i+1]) //se o número anteriormente for menor
    {
        return -1;
    }
    else if (l[i] > l[i+1])//se o número localizado anteriormente for maior que o posterior
    {
        return 1;
    }
    else 
    {
        for(i=0;i<n;i++){
        printf("%f ",l[i]); //imprime a lista final, em ordem
    }
        return 0;
        
    }
    
    
    }

}

int main()
{
    int x;
    scanf("%i",&x); //pede um número (tamanho da lista)
    
    int (*ptrl)(int) = &ordem; //ponteiro para a função ordem
    
    ptrl(x); //executa a função
    
    return 0;
}
