/*
Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.
*/
#include <stdio.h> //inclui biblioteca padrão
#include <stdlib.h> // inclui biblioteca padrão q contém a função qsort()
float ordem(int n)//função que recebe e ordena floats
{
    int i,*temp; //contador e ponteiro para mudança de posições na lista
    float l[n],*ptr; //lista e ponteiro da lista
    
    for(i=0;i<n;i++){ //recebe valores contidos na lista
        scanf("%f",&l[i]);
    }
    
    
    for(i=0;i<n;i++){//analisa valores da lista completa

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
    
    float (*ptrl)(int) = &ordem; //ponteiro para a função ordem
    
    ptrl(x); //executa a função
    
    return 0;
}
